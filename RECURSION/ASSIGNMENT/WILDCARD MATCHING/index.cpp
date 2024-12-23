//-------------------LEETCODE - 44. --HARD LEVEL--

// Given an input string (s) and a pattern (p), implement wildcard pattern matching with support for '?' and '*' where:

// '?' Matches any single character.
// '*' Matches any sequence of characters (including the empty sequence).
// The matching should cover the entire input string (not partial).

 

// Example 1:

// Input: s = "aa", p = "a"
// Output: false
// Explanation: "a" does not match the entire string "aa".
// Example 2:

// Input: s = "aa", p = "*"
// Output: true
// Explanation: '*' matches any sequence.
// Example 3:

// Input: s = "cb", p = "?a"
// Output: false
// Explanation: '?' matches 'c', but the second letter is 'a', which does not match 'b'.
 

// Constraints:

// 0 <= s.length, p.length <= 2000
// s contains only lowercase English letters.
// p contains only lowercase English letters, '?' or '*'.




class Solution {
public:
    // Helper function to perform the recursive matching
    bool isMatchHelper(string &s, int si, string &p, int pi){
        // BASE CASES
        // If both string and pattern are fully matched
        if(si == s.size() && pi == p.size()){
            return true;
        }

        // If string is fully matched but pattern is not
        if(si == s.size() && pi < p.size()){
            while(pi < p.size()){
                if(p[pi] != '*')
                    return false; // If remaining pattern is not all '*', return false
                pi++;
            }
            return true; // If remaining pattern is all '*', return true
        }

        // SINGLE CHAR MATCHING
        // If current characters match or pattern has '?'
        if(si < s.size() && (s[si] == p[pi] || '?' == p[pi])){
            return isMatchHelper(s, si+1, p, pi+1); // Move to the next characters
        }

        // If pattern has '*'
        if(pi < p.size() && p[pi] == '*'){
            // TREAT '*' AS EMPTY OR NULL
            bool caseA = isMatchHelper(s, si, p, pi+1);

            // LET '*' CONSUME ONE CHAR
            bool caseB = isMatchHelper(s, si+1, p, pi);
            return caseA || caseB; // Return true if either case is true
        }

        // CHAR DOESN'T MATCH
        return false; // If characters don't match and no '*', return false
    }

    // Main function to initiate the matching process
    bool isMatch(string s, string p) {
        int si = 0; // POINTER INDEX FOR S STRING
        int pi = 0; // POINTER INDEX FOR P STRING

        return isMatchHelper(s, si, p, pi); // Start the recursive matching
    }
};


// ### Time Complexity:
// The time complexity of the given recursive solution is **exponential**, specifically \( O(2^{m+n}) \), where:
// - \( m \) is the length of the string `s`.
// - \( n \) is the length of the pattern `p`.

// This is because, at each step, the recursive function splits into two branches when encountering a `'*'`, leading to a large number of recursive calls.

// ### Space Complexity:
// The space complexity is **O(m + n)**, where:
// - \( m \) is the length of the string `s`.
// - \( n \) is the length of the pattern `p`.

// This is due to the recursive call stack, which can grow up to \( m + n \) levels deep in the worst case.