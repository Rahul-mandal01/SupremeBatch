// -------------------------------------------GFG--Aggressive Cows-------------------------------

// Difficulty: HardAccuracy: 59.57%Submissions: 70K+Points: 8
// You are given an array consisting of n integers which denote the position of a stall. You are also given an integer k which denotes the number of aggressive cows. You are given the task of assigning stalls to k cows such that the minimum distance between any two of them is the maximum possible.
// The first line of input contains two space-separated integers n and k.
// The second line contains n space-separated integers denoting the position of the stalls.

// Example 1:

// Input:
// n=5 
// k=3
// stalls = [1 2 4 8 9]
// Output:
// 3
// Explanation:
// The first cow can be placed at stalls[0], 
// the second cow can be placed at stalls[2] and 
// the third cow can be placed at stalls[3]. 
// The minimum distance between cows, in this case, is 3, 
// which also is the largest among all possible ways.
// Example 2:

// Input:
// n=5 
// k=3
// stalls = [10 1 2 7 5]
// Output:
// 4
// Explanation:
// The first cow can be placed at stalls[0],
// the second cow can be placed at stalls[1] and
// the third cow can be placed at stalls[4].
// The minimum distance between cows, in this case, is 4,
// which also is the largest among all possible ways.
// Your Task:
// Complete the function int solve(), which takes integer n, k, and a vector stalls with n integers as input and returns the largest possible minimum distance between cows.

// Expected Time Complexity: O(n*log(10^9)).
// Expected Auxiliary Space: O(1).

// Constraints:
// 2 <= n <= 10^5
// 2 <= k <= n
// 0 <= stalls[i] <= 10^9



//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    bool isPossibleSolution(vector<int>&stalls, int k, int mid){
        //can we place k cows, with at least mid distance between cows
        int count = 1;
        int position = stalls[0];
        for(int i=1; i< stalls.size(); i++){
            if(stalls[i]- position >= mid){
                count++;
                position = stalls[i]; //one more cow has been placed
            }
            if(count == k){
                return true;
            }
        }
        return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        
        sort(stalls.begin(), stalls.end());
        int start = 0;
        int end = stalls[stalls.size()-1]-stalls[0];
        int ans = -1;
        
        while(start <= end){
            int mid = (start + end) >> 1;
            if(isPossibleSolution(stalls, k, mid)){
                ans = mid;
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends