// ----------------- LEETCODE:17 -----------------
// ------------------- Medium---------------------

// 17. Letter Combinations of a Phone Number
// Solved
// Medium
// Topics
// Companies
// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

// A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.


 

// Example 1:

// Input: digits = "23"
// Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
// Example 2:

// Input: digits = ""
// Output: []
// Example 3:

// Input: digits = "2"
// Output: ["a","b","c"]
 

// Constraints:

// 0 <= digits.length <= 4
// digits[i] is a digit in the range ['2', '9'].


class Solution {
    public:
    
        void solve(vector<string> &ans, int index, string output, string digits, vector<string> &mapping){
    
            // BASE CASE
            if(index >= digits.length()){
                ans.push_back(output);
                return;
            }
    
            // SOLVE 1 CASE, REST RECURSION WILL HANDLE
            int digit = digits[index] - '0' ;
            string value = mapping[digit] ;
    
            for(int i=0; i<value.length(); i++){
    
                char ch = value[i];
    
                // INCLUDE
                output.push_back(ch);
    
                // RECURSIVE CALL
                solve(ans, index+1, output, digits, mapping);
    
                // BACKTRACK
                output.pop_back();
            }
        }
        vector<string> letterCombinations(string digits) {
            vector<string> ans;
    
            // FOR EMPTY ARRAY, ANSWER WILL BE EMPTY
            if(digits.length() == 0)
                return ans;
            
            int index = 0;
            string output = "";
    
            vector<string> mapping(10);
    
            mapping[2] = "abc" ;
            mapping[3] = "def" ;
            mapping[4] = "ghi" ;
            mapping[5] = "jkl" ;
            mapping[6] = "mno" ;
            mapping[7] = "pqrs";
            mapping[8] = "tuv" ;
            mapping[9] = "wxyz";
    
            solve(ans, index, output, digits, mapping);
    
            return ans;
        }
    };


    /*
🎤 5-Minute Interview Explanation: Letter Combinations of a Phone Number

🧠 Problem Summary:
Given a string of digits from '2' to '9', we need to return all possible letter combinations the number could represent, based on the classic phone keypad mapping (like old mobile phones).

Each digit maps to a few letters. For example:
- 2 → "abc"
- 3 → "def"
- ...
We generate all possible combinations where we choose one letter per digit.

-----------------------------------------------------------
🪜 Approach Summary (Backtracking):
We use recursion + backtracking to build combinations character-by-character.

1️⃣ Start from the first digit (index 0).
2️⃣ For that digit, get its mapped letters (like "abc" for '2').
3️⃣ Try each letter:
    - Add it to the output string.
    - Move to the next digit (index+1).
4️⃣ When we reach the end of the digits (base case), we push the built string into the result.

🔁 Backtracking:
After each recursive call, we remove the last character (pop_back) to try the next possible letter.

-----------------------------------------------------------
✅ Interview One-Liner:
“I used backtracking to explore all possible letter combinations, where at each digit I try all mapped letters and build the combinations recursively.”

-----------------------------------------------------------
🧪 Real-Life Analogy:
Imagine dialing a number on an old phone keypad. For each number, you have a few possible letters — like a menu. You’re generating all the possible text messages you could type by picking one letter from each digit’s menu.

-----------------------------------------------------------
📊 Time Complexity: O(4^n * n)
- At each digit, we may have up to 4 choices (like for digit '7' → "pqrs")
- So total combinations: ~ 4^n
- Each string we build is of length `n`
=> Total time: O(4^n * n)

📦 Space Complexity: O(n)
- Recursive call stack goes up to depth `n`
- Output space (result list) is not counted in auxiliary space unless asked

📎 Note:
- We initialize a vector of size 10 (`mapping(10)`) to safely use indices from 0 to 9.
*/
