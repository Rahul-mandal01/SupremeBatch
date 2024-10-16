// ---------------LEETCODE : 767 ---------------
// Given a string s, rearrange the characters of s so that any two adjacent characters are not the same.

// Return any possible rearrangement of s or return "" if not possible.
// Example 1:

// Input: s = "aab"
// Output: "aba"
// Example 2:

// Input: s = "aaab"
// Output: ""
 

// Constraints:

// 1 <= s.length <= 500
// s consists of lowercase English letters.

class Solution {
public:
    string reorganizeString(string s) {
        int hash[26] = {0}; // Array to count the frequency of each character

        // Count the frequency of each character
        for(int i = 0; i < s.size(); i++) {
            hash[s[i] - 'a']++;
        }
        // ------T.C.--O(n)

        // Find the most frequent character
        char max_freq_char;
        int max_freq = INT_MIN;
        for(int i = 0; i < 26; i++) {
            if(hash[i] > max_freq) {
                max_freq = hash[i];
                max_freq_char = i + 'a';
            }
        }

        int index = 0;
        // Place the most frequent character at even indices
        while(max_freq > 0 && index < s.size()) {
            s[index] = max_freq_char;
            max_freq--;
            index += 2;
        }
        // ------T.C.--O(n)

        // If we cannot place all instances of the most frequent character
        if(max_freq != 0) {
            return "";
        }
        
        hash[max_freq_char - 'a'] = 0;

        // Place the rest of the characters
        for(int i = 0; i < 26; i++) {
            while(hash[i] > 0) {
                index = index >= s.size() ? 1 : index; // If index exceeds, reset to 1
                s[index] = i + 'a';
                hash[i]--;
                index += 2;
            }
        }

        return s; // Return the reorganized string
    }
};




// Time Complexity (T.C.):
// Counting Frequencies: The first for loop counts the frequency of each character, taking O(n) time where n is the length of the string.

// Finding Most Frequent Character: The second for loop scans through the frequency array, taking O(26) time, which is constant and can be considered O(1).

// Placing the Most Frequent Character: The while loop places the most frequent character in the string, taking O(n) time.

// Placing the Rest of the Characters: The last for loop places the rest of the characters, taking O(n) time.

// Overall, the time complexity is O(n).

// Space Complexity (S.C.):
// The hash array uses O(26) space, which is constant and can be considered O(1).

// No additional space proportional to the input size is required.

// Therefore, the space complexity is O(1).