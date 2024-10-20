// // LEETCODE:--:179
// // LARGEST NUMBER

// // Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.

// // Since the result may be very large, so you need to return a string instead of an integer.

 

// // Example 1:

// // Input: nums = [10,2]
// // Output: "210"
// // Example 2:

// // Input: nums = [3,30,34,5,9]
// // Output: "9534330"
 

// // Constraints:

// // 1 <= nums.length <= 100
// // 0 <= nums[i] <= 109


class Solution {
public:
    // Comparator function to decide the order of strings
    static bool mycomp(string a, string b){
        // Concatenate in both possible orders
        string t1 = a + b;
        string t2 = b + a;
        // Return true if t1 is greater, else false
        return t1 > t2;
    }

    string largestNumber(vector<int>& nums) {
        // Create a vector of strings to store string representations of numbers
        vector<string> snums;
        
        // Convert each integer in nums to a string and add it to snums
        for(auto n: nums){
            snums.push_back(to_string(n));
        }
        
        // Sort the strings using the custom comparator mycomp
        sort(snums.begin(), snums.end(), mycomp);
        
        // If the largest number is "0", return "0"
        if(snums[0] == "0")
            return "0";
        
        // Initialize an empty answer string
        string ans = "";
        
        // Concatenate all strings in snums to form the final largest number
        for(auto str: snums){
            ans += str;
        }
        
        // Return the answer
        return ans;
    }
};
