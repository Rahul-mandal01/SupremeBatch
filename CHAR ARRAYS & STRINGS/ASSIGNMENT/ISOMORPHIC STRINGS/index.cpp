// -------------LEETCODE:205----------------

// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

// Example 1:

// Input: s = "egg", t = "add"

// Output: true

// Explanation:

// The strings s and t can be made identical by:

// Mapping 'e' to 'a'.
// Mapping 'g' to 'd'.
// Example 2:

// Input: s = "foo", t = "bar"

// Output: false

// Explanation:

// The strings s and t can not be made identical as 'o' needs to be mapped to both 'a' and 'r'.

// Example 3:

// Input: s = "paper", t = "title"

// Output: true

 

// Constraints:

// 1 <= s.length <= 5 * 104
// t.length == s.length
// s and t consist of any valid ascii character.


class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256] = {0}; // Array to map characters from s to t
        bool istCharsMapped[256] = {0}; // Array to track characters already mapped in t

        // Iterate through the strings to create the mapping
        for (int i = 0; i < s.size(); i++) {
            if (hash[s[i]] == 0 && istCharsMapped[t[i]] == 0) {
                hash[s[i]] = t[i]; // Map character from s to t
                istCharsMapped[t[i]] = true; // Mark character in t as mapped
            }
        }

        // Verify the mapping
        for (int i = 0; i < s.size(); i++) {
            if (char(hash[s[i]]) != t[i]) {
                return false; // If mapping does not match, return false
            }
        }

        return true; // If all checks pass, the strings are isomorphic
    }
};


// Time Complexity (T.C.):
// The first for loop runs through the length of the string s, which takes O(n) time, where n is the length of the string s.

// The second for loop also runs through the length of the string s, which again takes O(n) time.

// Therefore, the overall time complexity is O(n).

// Space Complexity (S.C.):
// The hash array uses O(1) space because it has a fixed size of 256, regardless of the input size.

// The istCharsMapped array also uses O(1) space for the same reason.

// Therefore, the overall space complexity is O(1).