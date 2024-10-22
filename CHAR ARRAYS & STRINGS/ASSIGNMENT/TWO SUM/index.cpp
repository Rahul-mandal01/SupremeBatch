// ------------LEETCODE::1--------------------
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]
 

// Constraints:

// 2 <= nums.length <= 104
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// Only one valid answer exists.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j] == target){
                    arr.push_back(i);
                    arr.push_back(j);
                }
            }
        }
        return arr;
    }
};



// T.C::O(n2)
// S.C::O(1)



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // Hash map to store the number and its index
        vector<int> result; // Vector to store the result indices

        // Iterate through the array
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // Calculate the complement

            // Check if the complement exists in the hash map
            if (numMap.find(complement) != numMap.end()) {
                result.push_back(numMap[complement]); // Add the index of the complement
                result.push_back(i); // Add the current index
                return result; // Return the result as we found the pair
            }

            // Add the current number and its index to the hash map
            numMap[nums[i]] = i;
        }

        return result; // Return the result
    }
};



// Time Complexity (T.C.):
// O(n): Each element is processed at most once, and hash map operations (insert/find) take O(1) on average.

// Space Complexity (S.C.):
// O(n): In the worst case, all elements are added to the hash map.