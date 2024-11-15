// GCD of two numbers
// Difficulty: BasicAccuracy: 51.03%Submissions: 94K+Points: 1
// Given two positive integers a and b, find GCD of a and b.

// Note: Don't use the inbuilt gcd function

// Example 1:

// Input: 
// a = 3
// b = 6
// Output: 3
// Explanation: GCD of 3 and 6 is 3

// Example 2:

// Input: 
// a = 1
// b = 1
// Output: 1
// Explanation: GCD of 1 and 1 is 1

// Your Task:  
// You don't need to read input or print anything. Complete the function gcd() which takes two positive integers as input parameters and returns gcd of a and b as an integer.

// Expected Time Complexity: O(log(min(a, b)))
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ a, b ≤ 109



// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
// } Driver Code Ends

class Solution {
  public:
    int gcd(int a, int b) {
        // If one of the numbers is 0, return the other number as GCD
        if(a == 0) 
            return b;
        
        if(b == 0)
            return a;
        
        // Loop until one of the numbers becomes 0
        while(a > 0 && b > 0) {
            // Subtract the smaller number from the larger number
            if(a > b)
                a = a - b;
            else
                b = b - a;
        }
        // Return the non-zero number, which is the GCD
        return a == 0 ? b : a;
    }
};

// { Driver Code Starts
// int main(){
//     int t;
//     // Input number of test cases
//     scanf("%d", &t);
//     while(t--) {
//         int a;
//         // Input first number
//         scanf("%d", &a);
        
//         int b;
//         // Input second number
//         scanf("%d", &b);
        
//         Solution obj;
//         // Calculate GCD of a and b
//         int res = obj.gcd(a, b);
        
//         // Output the result
//         cout << res << endl;
        
//         // Print delimiter for separation
//         cout << "~" << "\n";
//     }
// }
// // } Driver Code Ends


// Time Complexity (TC):
// The time complexity of the gcd function provided is O(max(a, b)). This is because in the worst case, the loop runs until one of the numbers (a or b) becomes zero. Each iteration reduces the value of a or b by at least 1, leading to a maximum of max(a, b) iterations.

// Space Complexity (SC):
// The space complexity of the gcd function is O(1). This is because the function only uses a constant amount of extra space for its variables (a, b) and does not require any additional space that grows with the input size.