// -------------------------LEETCODE:37-------------------------
// -------------------------HARD--------------------------------


// 37. Sudoku Solver
// Solved
// Hard
// Topics
// Companies
// Write a program to solve a Sudoku puzzle by filling the empty cells.

// A sudoku solution must satisfy all of the following rules:

// Each of the digits 1-9 must occur exactly once in each row.
// Each of the digits 1-9 must occur exactly once in each column.
// Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.
// The '.' character indicates empty cells.

 

// Example 1:


// Input: board = [["5","3",".",".","7",".",".",".","."],["6",".",".","1","9","5",".",".","."],[".","9","8",".",".",".",".","6","."],["8",".",".",".","6",".",".",".","3"],["4",".",".","8",".","3",".",".","1"],["7",".",".",".","2",".",".",".","6"],[".","6",".",".",".",".","2","8","."],[".",".",".","4","1","9",".",".","5"],[".",".",".",".","8",".",".","7","9"]]
// Output: [["5","3","4","6","7","8","9","1","2"],["6","7","2","1","9","5","3","4","8"],["1","9","8","3","4","2","5","6","7"],["8","5","9","7","6","1","4","2","3"],["4","2","6","8","5","3","7","9","1"],["7","1","3","9","2","4","8","5","6"],["9","6","1","5","3","7","2","8","4"],["2","8","7","4","1","9","6","3","5"],["3","4","5","2","8","6","1","7","9"]]
// Explanation: The input board is shown above and the only valid solution is shown below:


 

// Constraints:

// board.length == 9
// board[i].length == 9
// board[i][j] is a digit or '.'.
// It is guaranteed that the input board has only one solution.


class Solution {
    public:
    
        bool isSafe(int row, int col, vector<vector<char>>& board, char value){
            int n = board.size();
            for(int i=0; i<n; i++){
    
                // ROW CHECK
                if(board[row][i] == value)
                    return false;
    
                // COLUMN CHECK
                if(board[i][col] == value) 
                    return false;
                
                // 3*3 BOX CHECK
                if(board[3*(row/3) + (i/3)][3*(col/3) + (i%3)] == value)
                    return false;
            }
            return true;
        }
    
        bool solve(vector<vector<char>>& board){
            int n = board.size();
    
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
    
                    // CHECK FOR EMPTY CELL
                    if(board[i][j] == '.'){
    
                        // TRY TO FILL WITH VALUES REMAINING FROM 1 TO 9
                        for(char val='1'; val<='9' ; val++){
    
                            // CHECK FOR SAFETY
                            if(isSafe(i, j, board, val)){
    
                                // INSERT
                                board[i][j] = val;
    
                                // REST RECURSION WILL HANDLE
                                bool aageKaSolution = solve(board);
                                if(aageKaSolution == true){
                                    return true;
                                }else{
    
                                    // BACKTRACK
                                    board[i][j] = '.';
                                }
                            }
                        }
                        // IF WE TRIED FROM 1 TO 9 AND STILL NOT FOUND SOLUTION AT CURRENT CELL, THAT MEANS WE DID SOME MISTAKES
                        // IN EARLIER CELLS, SO GO BACK BY RETURNING FALSE
                        return false;
                    }
                }
            }
    
            // ALL CELLS FILLED
            return true;
        }
        void solveSudoku(vector<vector<char>>& board) {
            solve(board);
        }
    };


    

        /*
    🎤 5-Minute Interview Explanation: Sudoku Solver (LeetCode 37)

    🧠 Problem Summary:
    We are given a partially filled 9x9 Sudoku board with empty cells marked as '.'.
    The goal is to fill all empty cells such that:
    1️⃣ Each row contains digits from 1 to 9 without repetition.
    2️⃣ Each column contains digits from 1 to 9 without repetition.
    3️⃣ Each 3x3 subgrid (there are 9 of them) contains digits from 1 to 9 without repetition.

    We are guaranteed that the board has only one valid solution.

    -----------------------------------------------------------
    🪜 Approach Summary (Backtracking):
    We solve this using classic recursion + backtracking.

    1️⃣ Traverse the board to find the first empty cell.
    2️⃣ Try placing digits '1' to '9' at that cell.
    3️⃣ For each digit:
        - Check if placing it is safe (row, column, and 3x3 box must not have that digit).
        - If it's safe, place it and make a recursive call to solve the rest of the board.
    4️⃣ If the recursive call fails (wrong path), backtrack: undo the move and try the next digit.
    5️⃣ If no digit fits, return false (backtrack further).

    📦 Helper Function: `isSafe(row, col, value)`
    - Checks whether placing `value` at board[row][col] is valid.
    - Row Check → `board[row][i]`
    - Column Check → `board[i][col]`
    - 3x3 Box Check → top-left index: `3*(row/3), 3*(col/3)` and then loop using `i/3, i%3`

    -----------------------------------------------------------
    ✅ Interview One-Liner:
    “I used backtracking to fill the Sudoku board by placing digits in empty cells while ensuring each move is valid in row, column, and box, and I backtrack if I reach an invalid state.”

    -----------------------------------------------------------
    🧪 Real-Life Analogy:
    Think of it like seating guests at a wedding:
    - Each table (row/col/box) must have unique guests (no repeats).
    - You try placing people, and if someone conflicts, you reshuffle (backtrack) to keep the seating valid.

    -----------------------------------------------------------
    📊 Time Complexity: O(9^m)
    - `m` = number of empty cells
    - For each empty cell, we try up to 9 digits
    - So worst-case: O(9^m), but real pruning happens due to constraints

    📦 Space Complexity: O(1) auxiliary
    - Board is updated in-place
    - Only recursion stack goes up to depth 81 in worst case
    - Output space (board) is not counted in auxiliary space unless asked

    📎 Note:
    - The `isSafe` function uses a clever formula to calculate 3x3 box indices.
    - Early return optimizes backtracking and stops once the solution is found.
    */
