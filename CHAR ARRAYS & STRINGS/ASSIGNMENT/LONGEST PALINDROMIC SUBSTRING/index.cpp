// --------------LEETCODE::05----------------------
// Given a string s, return the longest 
// palindromic
 
// substring
//  in s.

 

// Example 1:

// Input: s = "babad"
// Output: "bab"
// Explanation: "aba" is also a valid answer.
// Example 2:

// Input: s = "cbbd"
// Output: "bb"
 

// Constraints:

// 1 <= s.length <= 1000
// s consist of only digits and English letters.


class Solution {
public:
    // Function to check if a substring is a palindrome
    bool isPalindrome(string &s, int start, int end) {
        while (start < end) { // Loop until the middle of the substring
            if (s[start] != s[end]) { // Check if characters at start and end are different
                return false; // If different, it's not a palindrome
            }
            start++, end--; // Move towards the center
        }
        return true; // If all characters match, it's a palindrome
    }

    // Function to find the longest palindromic substring
    string longestPalindrome(string s) {
        string ans = ""; // Initialize an empty string to store the longest palindrome
        for (int i = 0; i < s.size(); i++) { // Loop through each character in the string
            for (int j = i; j < s.size(); j++) { // Loop through each possible end of the substring
                if (isPalindrome(s, i, j)) { // Check if the substring s[i..j] is a palindrome
                    string t = s.substr(i, j - i + 1); // Extract the substring s[i..j]
                    ans = t.size() > ans.size() ? t : ans; // Update ans if the new substring is longer
                }
            }
        }
        return ans; // Return the longest palindromic substring
    }
};



// Time Complexity (T.C.):
// Outer Loop: The outer loop runs for each character in the string, so it runs O(n) times.

// Inner Loop: For each character in the string, the inner loop runs O(n) times in the worst case.

// Palindrome Check: The isPalindrome function checks the substring from start to end, which takes O(n) time in the worst case.

// Combining these:

// Each pair (i, j) is checked, leading to O(n3) overall time complexity since the nested loops and isPalindrome check all pairs.

// Space Complexity (S.C.):
// String Storage: The maximum storage for strings used in comparisons is linear, i.e., O(n)

// Extra Storage for Results: Space for storing the longest palindrome found, which is at most O(n)
// So:Time Complexity: O(n3) Space Complexity: 