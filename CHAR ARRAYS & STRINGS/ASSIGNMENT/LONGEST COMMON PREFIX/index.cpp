// Leetcode:14
// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

 

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
 

// Constraints:

// 1 <= strs.length <= 200
// 0 <= strs[i].length <= 200
// strs[i] consists of only lowercase English letters.




class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans; // Initialize the answer string to store the longest common prefix
        int i = 0; // Index to traverse characters of the strings
        
        while (true) { // Infinite loop until we break out
            char curr_ch = 0; // Initialize the current character as 0 (null)
            
            for (int j = 0; j < strs.size(); j++) { // Loop through each string in the vector
                string str = strs[j]; // Access each string in the vector
                
                if (i >= str.size()) { // Check if the index is out of bounds for the current string
                    curr_ch = 0; // Set current character to null if out of bounds
                    break; // Break the loop if out of bounds
                }
                
                // Just started checking or all strings have the same character at index i
                if (curr_ch == 0) {
                    curr_ch = str[i]; // Set the current character to the character at index i
                } else if (str[i] != curr_ch) { // If characters at index i don't match
                    curr_ch = 0; // Set current character to null
                    break; // Break the loop as the prefix is no longer common
                }
            }
            
            if (curr_ch == 0) { // If current character is null, it means no common prefix
                break; // Break the infinite loop
            }
            
            ans.push_back(curr_ch); // Add the current character to the answer string
            i++; // Move to the next index
        }
        
        return ans; // Return the longest common prefix
    }
};
