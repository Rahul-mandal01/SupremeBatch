// ----------------------LEETCODE:22-----------------------
// ----------------------MEDIUM----------------------

// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

// Example 1:

// Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]
// Example 2:

// Input: n = 1
// Output: ["()"]
 

// Constraints:

// 1 <= n <= 8


class Solution {
    public:
        void solve (vector<string> &ans, int n, int used_open, int used_close, int rem_open, int rem_close, string output){
    
            // BASE CASE
            if(rem_open == 0 && rem_close == 0){
                ans.push_back(output);
                return;
            }
    
            // INCLUDE OPEN BRACKET
            if(rem_open > 0){
                output.push_back('(');
                solve(ans, n, used_open+1, used_close, rem_open-1, rem_close, output);
                // BACKTRACK
                output.pop_back();
            }
    
            // INCLUDE CLOSE BRACKET
            if(used_open > used_close){
                output.push_back(')');
                solve(ans, n, used_open, used_close+1, rem_open, rem_close-1, output);
                // BACKTRACK
                output.pop_back();
            } 
        }
        vector<string> generateParenthesis(int n) {
            vector<string> ans;
            int used_open = 0;
            int used_close = 0;
    
            int rem_open = n;
            int rem_close = n;
    
            string output = "";
            solve(ans, n, used_open, used_close, rem_open, rem_close, output);
            return ans;
        }
    };







/*
🎤 5-Minute Interview Explanation: Generate Parentheses

🧠 Problem Summary:
We are given n pairs of parentheses and we have to generate **all valid combinations**.
A valid combination means every opening '(' has a closing ')' after it, and at no point do we have more ')' than '('.

-----------------------------------------------------------
🪜 Approach Summary (Backtracking):
We use a recursive backtracking approach to **build strings step-by-step**.

At each step:
1. If we still have open brackets, we can add `'('`.
2. We can only add `')'` if the number of `'('` used so far is more than the number of `')'` — this keeps it valid.

We continue building until we've used up all open and close brackets. Once done, we save that string in the result list.

We also use **backtracking** by undoing the last step (`pop_back()`) to try another possibility.

-----------------------------------------------------------
✅ Interview One-Liner:
“I used backtracking to explore all valid parentheses combinations by only adding ')' if it maintains validity — meaning open > close.”

-----------------------------------------------------------
🧪 Real-Life Analogy:
It's like stacking plates and covers. You can only remove a cover (add a ')') if there's already a plate underneath it (an '(' before it). This way, you avoid an unstable stack.

-----------------------------------------------------------
📊 Time Complexity: O(n * 4^n)
- For `n` pairs, the number of valid strings ≈ Catalan number (~ 4^n / √n)
- Each string we build is of length `2n`
=> Total time: O(n * 4^n)

📦 Space Complexity: O(n * 4^n)
- Recursion depth can go up to `2n` → O(n)
- We store all valid strings (each of length 2n), number of such strings ≈ 4^n
=> Total space: O(n * 4^n)
*/
