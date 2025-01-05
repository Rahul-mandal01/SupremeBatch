// LEETCODE:: 1155 -- MEDIUM LEVEL --

// You have n dice, and each dice has k faces numbered from 1 to k.

// Given three integers n, k, and target, return the number of possible ways (out of the kn total ways) to roll the dice, so the sum of the face-up numbers equals target. Since the answer may be too large, return it modulo 109 + 7.

 

// Example 1:

// Input: n = 1, k = 6, target = 3
// Output: 1
// Explanation: You throw one die with 6 faces.
// There is only one way to get a sum of 3.
// Example 2:

// Input: n = 2, k = 6, target = 7
// Output: 6
// Explanation: You throw two dice, each with 6 faces.
// There are 6 ways to get a sum of 7: 1+6, 2+5, 3+4, 4+3, 5+2, 6+1.
// Example 3:

// Input: n = 30, k = 30, target = 500
// Output: 222616187
// Explanation: The answer must be returned modulo 109 + 7.
 

// Constraints:

// 1 <= n, k <= 30
// 1 <= target <= 1000



class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        // BASE CASES
        if(target < 0)
            return 0; // If target is negative, no valid way to achieve it
        
        if(n == 0 && target == 0) 
            return 1; // If no dice left and target is 0, one valid way (do nothing)
        
        if(n == 0 && target != 0) 
            return 0; // If no dice left and target is not 0, no valid way
        
        if(n != 0 && target == 0) 
            return 0; // If dice left but target is 0, no valid way
        
        int ans = 0;
        // Try all possible outcomes for the current dice
        for(int i = 1; i <= k; i++){
            ans = ans + numRollsToTarget(n - 1, k, target - i); // Recursive call
        }

        return ans; // Return the total number of ways
    }
};


// Time Complexity (TC)
// The time complexity of the numRollsToTarget function is O(k^n), where n is the number of dice and k is the number of faces on each die. This is because, for each die, the function makes k recursive calls, leading to an exponential number of calls.

// Space Complexity (SC)
// The space complexity of the numRollsToTarget function is O(n), where n is the number of dice. This is due to the maximum depth of the recursion stack, which can be equal to the number of dice in the worst case.

// Summary
// Time Complexity: O(k^n)
// Space Complexity: O(n)