// -------------------------LEETCODE :: 279 --------------------

// Given an integer n, return the least number of perfect square numbers that sum to n.

// A perfect square is an integer that is the square of an integer; in other words, it is the product of some integer with itself. For example, 1, 4, 9, and 16 are perfect squares while 3 and 11 are not.

 

// Example 1:

// Input: n = 12
// Output: 3
// Explanation: 12 = 4 + 4 + 4.
// Example 2:

// Input: n = 13
// Output: 2
// Explanation: 13 = 4 + 9.
 

// Constraints:

// 1 <= n <= 104


class Solution {
public:
    // Helper function to find the least number of perfect square numbers that sum to n
    int numSquareHelper(int n){
        // BASE CASES
        if(n == 0)
            return 1; // If n is 0, return 1 (base case for recursion)
        
        if(n < 0)
            return 0; // If n is negative, return 0 (invalid case)
        
        int ans = INT_MAX; // Initialize the answer to the maximum integer value
        int i = 1; // Start with the smallest perfect square (1*1)
        int end = sqrt(n); // Calculate the largest possible perfect square less than or equal to n
        while(i <= end){
            int perfectSquare = i * i; // Calculate the perfect square
            // Recursively find the number of perfect squares for the remaining value (n - perfectSquare)
            int numberOfPerfectSquares = 1 + numSquareHelper(n - perfectSquare);
            // Update the answer if a smaller number of perfect squares is found
            if(numberOfPerfectSquares < ans){
                ans = numberOfPerfectSquares;
            }
            ++i; // Move to the next perfect square
        }
        return ans; // Return the minimum number of perfect squares found
    }

    // Main function to initiate the process
    int numSquares(int n) {
        return numSquareHelper(n) - 1; // Subtract 1 to adjust for the base case
    }
};


// Time Complexity Analysis
// The time complexity of the numSquareHelper function is indeed exponential, but let's clarify the exact nature of this complexity:

// Recursive Calls:

// For each value of n, the function makes recursive calls for each perfect square less than or equal to n.
// This results in multiple recursive branches, leading to a combinatorial explosion of recursive calls.
// Exponential Growth:

// The number of recursive calls grows exponentially with n, as each call can branch into multiple sub-calls.
// This leads to a time complexity of O(n^n) in the worst case, where each level of recursion can have up to n branches.
// Space Complexity (SC)
// The space complexity of the numSquareHelper function is O(n), where n is the input number. This is due to the maximum depth of the recursion stack, which can be equal to n in the worst case.

// Summary
// Time Complexity: O(n^n)
// Space Complexity: O(n)