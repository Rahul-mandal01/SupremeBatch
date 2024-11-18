// GFG
// Modular Exponentiation for large numbers
// Difficulty: MediumAccuracy: 52.56%Submissions: 62K+Points: 4
// Implement pow(x, n) % M.
// In other words, for a given value of x, n, and M, find  (xn) % M.
 

// Example 1:

// Input:
// x = 3, n = 2, m = 4
// Output:
// 1
// Explanation:
// 32 = 9. 9 % 4 = 1.
// Example 2:

// Input:
// x = 2, n = 6, m = 10
// Output:
// 4
// Explanation:
// 26 = 64. 64 % 10 = 4.

// Your Task:
// You don't need to read or print anything. Your task is to complete the function PowMod() which takes integers x, n, and M as input parameters and returns xn % M.
 

// Expected Time Complexity: O(log(n))
// Expected Space Complexity: O(1)
 

// Constraints:
// 1 ≤ x, n, M ≤ 109



// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
// } Driver Code Ends

class Solution
{
    public:
        // Function to compute (x^n) % M using iterative method
        long long int PowMod(long long int x, long long int n, long long int M)
        {
            long long int ans = 1; // Initialize the result
            
            while (n > 0) {
              // If n is odd, multiply x with the result and take modulo M
              if (n & 1) {
                  ans = (ans * x) % M;
              }
              
              // Update x to x^2 and take modulo M
              x = (x * x) % M;
              // Divide n by 2
              n >>= 1;
            }
            // Return the result modulo M
            return ans % M;
        }
};

// { Driver Code Starts.
// int main(){
//     int T;
//     // Input number of test cases
//     cin >> T;
//     while (T--)
//     {
//         long long int x, n, m;
//         // Input base, exponent, and modulus
//         cin >> x >> n >> m;
        
//         Solution ob;
//         // Compute (x^n) % m using PowMod function
//         long long int ans = ob.PowMod(x, n, m);
        
//         // Output the result
//         cout << ans << "\n";
        
//         // Print delimiter for separation
//         cout << "~" << "\n";
//     }
//     return 0;
// }
// } Driver Code Ends



// Time Complexity (TC):
// The time complexity of the PowMod function is O(log n). This is because in each iteration of the loop, the exponent n is divided by 2 (using bitwise right shift n >>= 1). Therefore, the number of iterations is proportional to the logarithm of n.

// Space Complexity (SC):
// The space complexity of the PowMod function is O(1). This is because the function uses a constant amount of extra space for its variables (ans, x, n, M) and does not require any additional space that grows with the input size.