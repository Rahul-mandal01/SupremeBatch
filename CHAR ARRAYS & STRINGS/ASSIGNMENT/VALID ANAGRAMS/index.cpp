// LEETCODE::242
// Given two strings s and t, return true if t is an 
// anagram
//  of s, and false otherwise.

 

// Example 1:

// Input: s = "anagram", t = "nagaram"

// Output: true

// Example 2:

// Input: s = "rat", t = "car"

// Output: false

 

// Constraints:

// 1 <= s.length, t.length <= 5 * 104
// s and t consist of lowercase English letters.


class Solution {
public:
    bool isAnagram(string s, string t) {
        // APPROACH 1: T.C - O(nlogn)
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if(s == t)
        //     return true;
        // else
        //     return false;

        // APPROACH 2: T.C - O(m+n)

        // Initialize a frequency table to count characters
        int freqTable[256] = {0};
        
        // Increment the frequency of characters in string s
        for(int i = 0; i < s.size(); i++){
            freqTable[s[i]]++;
        } // T.C: O(n), where n is the length of string s
        
        // Decrement the frequency of characters in string t
        for(int i = 0; i < t.size(); i++){
            freqTable[t[i]]--;
        } // T.C: O(m), where m is the length of string t
        
        // Check if all frequencies are zero
        for(int i = 0; i < 256; i++){
            if(freqTable[i] != 0){
                return false;
            }
        } // T.C: O(256)
        
        // If all frequencies are zero, s and t are anagrams
        return true;
    }
};
