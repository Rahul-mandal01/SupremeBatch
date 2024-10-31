// --------------LEETCODE::6
// The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

// P   A   H   N
// A P L S I I G
// Y   I   R
// And then read line by line: "PAHNAPLSIIGYIR"

// Write the code that will take a string and make this conversion given a number of rows:

// string convert(string s, int numRows);
 

// Example 1:

// Input: s = "PAYPALISHIRING", numRows = 3
// Output: "PAHNAPLSIIGYIR"
// Example 2:

// Input: s = "PAYPALISHIRING", numRows = 4
// Output: "PINALSIGYAHRPI"
// Explanation:
// P     I    N
// A   L S  I G
// Y A   H R
// P     I
// Example 3:

// Input: s = "A", numRows = 1
// Output: "A"
 

// Constraints:

// 1 <= s.length <= 1000
// s consists of English letters (lower-case and upper-case), ',' and '.'.
// 1 <= numRows <= 1000


class Solution {
public:
    string convert(string s, int numRows) {
        // If the number of rows is 1, return the string as it is
        if (numRows == 1)
            return s;

        // Create a vector of strings to store characters in a zigzag pattern
        vector<string> zigzag(numRows);

        // Initialize the current index and row
        int i = 0, row = 0;
        // Direction flag: true for moving down, false for moving up
        bool direction = true;

        // Traverse through the string
        while (i < s.size()) {
            // Append the current character to the current row
            zigzag[row].push_back(s[i++]);

            if (direction) {  // Moving down
                row++;
                // If we reach the last row, change direction to up
                if (row == numRows) {
                    row = numRows - 2;
                    direction = false;
                }
            } else {  // Moving up
                row--;
                // If we reach the first row, change direction to down
                if (row == -1) {
                    row = 1;
                    direction = true;
                }
            }
        }

        // Concatenate all strings from the zigzag pattern
        string ans;
        for (const string& line : zigzag) {
            ans += line;
        }

        // Return the final zigzag string
        return ans;
    }
};


// Time Complexity (T.C.)
// The loop iterates through each character of the string exactly once.

// Time Complexity: O(n), where n is the length of the input string s.

// Space Complexity (S.C.)
// The additional space used is for the zigzag vector which stores characters in rows.

// Space Complexity: O(n), where n is the length of the input string s.