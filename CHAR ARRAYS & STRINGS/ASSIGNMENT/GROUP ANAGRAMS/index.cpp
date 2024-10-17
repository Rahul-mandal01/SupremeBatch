// -----------LEETCODE:49-------------------

// Given an array of strings strs, group the 
// anagrams
//  together. You can return the answer in any order.

 

// Example 1:

// Input: strs = ["eat","tea","tan","ate","nat","bat"]

// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

// Explanation:

// There is no string in strs that can be rearranged to form "bat".
// The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
// The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.
// Example 2:

// Input: strs = [""]

// Output: [[""]]

// Example 3:

// Input: strs = ["a"]

// Output: [["a"]]

 

// Constraints:

// 1 <= strs.length <= 104
// 0 <= strs[i].length <= 100
// strs[i] consists of lowercase English letters.


// ----------METHOD:1------------
class Solution {
public:
    // Function to group anagrams together
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp; // Initialize a map to store sorted string as key and anagrams as values

        // Loop through each string in the input vector
        for(auto str : strs) {
            string s = str; // Copy the string to a new variable
            sort(s.begin(), s.end()); // Sort the string to form the key
            mp[s].push_back(str); // Add the original string to the map corresponding to the sorted key
        }

        vector<vector<string>> ans; // Initialize a vector to store the result

        // Loop through each entry in the map
        for(auto it = mp.begin(); it != mp.end(); it++) {
            ans.push_back(it->second); // Add each group of anagrams to the result vector
        }

        return ans; // Return the grouped anagrams
    }
};


// Time Complexity (T.C.):
// Sorting Each String: The sort(s.begin(), s.end()); operation runs in O(mlog⁡m) time, where m is the length of the string. This is done for each string in the vector, so for n strings, it’s O(n×mlogm).

// Inserting into Map: Inserting each string into the map takes O(1) on average, and accessing the map to add the strings to the vector of anagrams also takes O(1).

// Combining these, the overall time complexity is O(n×mlog⁡m), where n is the number of strings and m is the average length of the strings.

// Space Complexity (S.C.):
// Map Storage: The map stores each string exactly once, so the space used by the map is O(n×m).
// Result Storage: The result vector also stores each string once, resulting in O(n×m) space.

// Overall, the space complexity is O(n×m).