// LEETCODE --- 647
// Given a string s, return the number of palindromic substrings in it.

// A string is a palindrome when it reads the same backward as forward.

// A substring is a contiguous sequence of characters within the string.

 

// Example 1:

// Input: s = "abc"
// Output: 3
// Explanation: Three palindromic strings: "a", "b", "c".
// Example 2:

// Input: s = "aaa"
// Output: 6
// Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".
 

// Constraints:

// 1 <= s.length <= 1000
// s consists of lowercase English letters.

class Solution {
public:
    // Function to count palindromic substrings expanding from the given left and right indices
    int expandAroundIndex(string s, int left, int right) {
        int count = 0; // Initialize count to 0
        // While characters at left and right are equal, increment the count and expand outwards
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            count++; // Increment count when a palindrome is found
            left--; // Move left pointer one step to the left
            right++; // Move right pointer one step to the right
        }
        return count; // Return the number of palindromic substrings found
    }

    // Function to count all palindromic substrings in the given string
    int countSubstrings(string s) {
        int totalCount = 0; // Initialize total count to 0
        int n = s.length(); // Get the length of the string

        // Loop through each character and treat it as the center of odd and even length palindromes
        for (int center = 0; center < n; center++) {
            // Count odd length palindromic substrings
            int oddKaAns = expandAroundIndex(s, center, center);
            totalCount += oddKaAns; // Add count of odd length palindromes to total count

            // Count even length palindromic substrings
            int evenKaAns = expandAroundIndex(s, center, center + 1);
            totalCount += evenKaAns; // Add count of even length palindromes to total count
        }
        return totalCount; // Return the total count of palindromic substrings
    }
};
