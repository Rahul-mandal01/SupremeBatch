// ----------------LEETCODE::08--------------
// Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer.

// The algorithm for myAtoi(string s) is as follows:

// Whitespace: Ignore any leading whitespace (" ").
// Signedness: Determine the sign by checking if the next character is '-' or '+', assuming positivity is neither present.
// Conversion: Read the integer by skipping leading zeros until a non-digit character is encountered or the end of the string is reached. If no digits were read, then the result is 0.
// Rounding: If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then round the integer to remain in the range. Specifically, integers less than -231 should be rounded to -231, and integers greater than 231 - 1 should be rounded to 231 - 1.
// Return the integer as the final result.

 

// Example 1:

// Input: s = "42"

// Output: 42

// Explanation:

// The underlined characters are what is read in and the caret is the current reader position.
// Step 1: "42" (no characters read because there is no leading whitespace)
//          ^
// Step 2: "42" (no characters read because there is neither a '-' nor '+')
//          ^
// Step 3: "42" ("42" is read in)
//            ^
// Example 2:

// Input: s = " -042"

// Output: -42

// Explanation:

// Step 1: "   -042" (leading whitespace is read and ignored)
//             ^
// Step 2: "   -042" ('-' is read, so the result should be negative)
//              ^
// Step 3: "   -042" ("042" is read in, leading zeros ignored in the result)
//                ^
// Example 3:

// Input: s = "1337c0d3"

// Output: 1337

// Explanation:

// Step 1: "1337c0d3" (no characters read because there is no leading whitespace)
//          ^
// Step 2: "1337c0d3" (no characters read because there is neither a '-' nor '+')
//          ^
// Step 3: "1337c0d3" ("1337" is read in; reading stops because the next character is a non-digit)
//              ^
// Example 4:

// Input: s = "0-1"

// Output: 0

// Explanation:

// Step 1: "0-1" (no characters read because there is no leading whitespace)
//          ^
// Step 2: "0-1" (no characters read because there is neither a '-' nor '+')
//          ^
// Step 3: "0-1" ("0" is read in; reading stops because the next character is a non-digit)
//           ^
// Example 5:

// Input: s = "words and 987"

// Output: 0

// Explanation:

// Reading stops at the first non-digit character 'w'.

 

// Constraints:

// 0 <= s.length <= 200
// s consists of English letters (lower-case and upper-case), digits (0-9), ' ', '+', '-', and '.'.



class Solution {
public:
    int myAtoi(string s) {
        int num=0, i=0, sign=1; //if +ve
        while(s[i] == ' '){
            i++;
        }
        if(i<s.size() && (s[i] == '-' || s[i] == '+')){
            sign = s[i] == '+' ? 1 : -1;
            i++;
        }
        while(i<s.size() && isdigit(s[i])){
            if(num > INT_MAX/10 || (num == INT_MAX/10 && s[i] > '7')){
                return sign == -1 ? INT_MIN : INT_MAX;
            }
            num = num*10+(s[i] - '0');
            i++;
        }
        return num*sign;
    }
};


// Time Complexity (T.C.)
// Time complexity refers to the amount of time an algorithm takes to complete based on the size of the input data.

// Whitespace Trimming: The loop while (s[i] == ' ') runs in O(k) time where k is the number of leading whitespaces. In the worst case, k could be equal to the size of the string, but generally, it is much smaller.

// Sign Handling: The check for the sign is a constant-time operation, O(1).

// Digit Conversion Loop: The loop while (i < s.size() && isdigit(s[i])) processes each character once, so it runs in O(n) time, where n is the total number of characters in the input string s.

// Combining these steps, we can simplify the time complexity as O(n), because the most significant factor is the digit conversion loop, which dominates the overall time complexity.

// Space Complexity (S.C.)
// Space complexity refers to the amount of extra memory an algorithm uses based on the size of the input data.

// Variables: The code uses a few integer variables (num, i, sign), which take up constant space, O(1).

// Input String: The input string s is provided to the function and is not modified or duplicated within the function, so it doesn't affect the space complexity.

// Since the extra space used by the algorithm is constant and independent of the size of the input, the space complexity is O(1).