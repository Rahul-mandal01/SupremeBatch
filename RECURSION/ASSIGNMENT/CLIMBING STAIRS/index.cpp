// LEETCODE:70
// You are climbing a staircase. It takes n steps to reach the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

// Example 1:

// Input: n = 2
// Output: 2
// Explanation: There are two ways to climb to the top.
// 1. 1 step + 1 step
// 2. 2 steps
// Example 2:

// Input: n = 3
// Output: 3
// Explanation: There are three ways to climb to the top.
// 1. 1 step + 1 step + 1 step
// 2. 1 step + 2 steps
// 3. 2 steps + 1 step
 

// Constraints:

// 1 <= n <= 45


 
#include<iostream>
using namespace std;

int climbStairs(int n){
    // BASE CASE
    if( n == 0 || n == 1 )
        return 1;
    
    int ans = climbStairs(n-1) + climbStairs(n-2);
    return ans;
}
int main(){

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    int ans = climbStairs(n);
    cout << "The total number of ways to climb the stairs is: " << ans << endl;

    return 0;
}