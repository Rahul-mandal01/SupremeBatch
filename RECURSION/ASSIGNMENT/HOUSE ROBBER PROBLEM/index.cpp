// -----------------LEETCODE:198

// You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

// Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

 

// Example 1:

// Input: nums = [1,2,3,1]
// Output: 4
// Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
// Total amount you can rob = 1 + 3 = 4.
// Example 2:

// Input: nums = [2,7,9,3,1]
// Output: 12
// Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
// Total amount you can rob = 2 + 9 + 1 = 12.
 

// Constraints:

// 1 <= nums.length <= 100
// 0 <= nums[i] <= 400


class Solution {
public:
    // Helper function to calculate the maximum amount that can be robbed
    int robHelper(vector<int>& nums, int i) {
        // Base case: If the index is out of bounds, return 0
        if(i >= nums.size())
            return 0;
        
        // SOLUTION FOR 1 CASE:
        // Option 1: Rob the current house and move to the house two steps ahead
        int robAmt1 = nums[i] + robHelper(nums, i + 2);
        // Option 2: Skip the current house and move to the next house
        int robAmt2 = 0 + robHelper(nums, i + 1);
        // Return the maximum amount between the two options
        return max(robAmt1, robAmt2);
    }
    
    // Main function to start the robbing process
    int rob(vector<int>& nums) {
        return robHelper(nums, 0); // Start from the first house
    }
};



// Time Complexity (TC):
// The time complexity of the provided solution is 𝑂(2^𝑁), where 𝑁 is the number of houses. This is because the algorithm explores two possibilities at each house: either robbing it or skipping it. This results in an exponential growth of the number of recursive calls, leading to a total of 2𝑁 possible states.

// Space Complexity (SC):
// The space complexity of the solution is 𝑂(𝑁) due to the recursive call stack. The maximum depth of the recursive calls is equal to the number of houses, which is 𝑁.

// Summary:
// Time Complexity (TC): 𝑂(2^𝑁)

// Space Complexity (SC): 𝑂(𝑁)