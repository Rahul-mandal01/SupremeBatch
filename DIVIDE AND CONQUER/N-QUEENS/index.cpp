// -------------------------LEETCODE ---> 51 --------------------------
// -------------------------Hard----------------------
// The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

// Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

// Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.

// Example 1:

// Input: n = 4
// Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
// Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above
// Example 2:

// Input: n = 1
// Output: [["Q"]]

// Constraints:

// 1 <= n <= 9

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<int, bool> rowCheck;
unordered_map<int, bool> upperLeftDiagnolCheck;
unordered_map<int, bool> bottomLeftDiagnolCheck;

void printSolution(vector<vector<char>> &board, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
}

bool isSafe(int row, int col, vector<vector<char>> &board, int n)
{

    if (rowCheck[row] == true)
        return false;

    if (upperLeftDiagnolCheck[n - 1 + col - row] == true)
        return false;

    if (bottomLeftDiagnolCheck[row + col] == true)
        return false;

    return true;
    // // WANT TO CHECK WHETHER I CAN KEEP QUEEN ON CURRENT CELL OR NOT [ROW][COL]
    // int i = row;
    // int j= col;

    // // CHECK FOR LEFT ROW
    // while(j>=0){
    //     if(board[i][j] == 'Q'){
    //         return false;
    //     }
    //     j--;
    // }

    // // CHECK FOR UPPER LEFT DIAGONAL
    // i = row;
    // j = col;
    // while(i>=0 && j>=0){
    //     if(board[i][j] == 'Q'){
    //         return false;
    //     }
    //     i--;
    //     j--;
    // }

    // // CHECK FOR LOWER LEFT DIAGONAL
    // i = row;
    // j = col;
    // while(i<n && j>=0){
    //     if(board[i][j] == 'Q'){
    //         return false;
    //     }
    //     i++;
    //     j--;
    // }

    // YOU FOUND QUEEN NO WHERE, THAT MEANS THIS IS SAFE POSITION TO KEEP QUEEN

    // return true;
}

void solve(vector<vector<char>> &board, int col, int n)
{
    // BASE CASE
    if (col >= n)
    {
        printSolution(board, n);
        return;
    }

    // 1 CASE SOLVE KARNA HAI BAAKI RECURSION SAMBHAL LEGA
    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            // RAKH DO
            board[row][col] = 'Q';
            rowCheck[row] = true;
            upperLeftDiagnolCheck[n - 1 + col - row] = true;
            bottomLeftDiagnolCheck[row + col] = true;

            // RECURSIVE CALL
            solve(board, col + 1, n);

            // BACKTRACKING
            board[row][col] = '-';
            rowCheck[row] = false;
            upperLeftDiagnolCheck[n - 1 + col - row] = false;
            bottomLeftDiagnolCheck[row + col] = false;
        }
    }
}

int main()
{
    int n = 9;
    vector<vector<char>> board(n, vector<char>(n, '-'));
    int col = 0;
    // '-' indicates Empty cell
    // 'Q' indicates Queen cell
    solve(board, col, n);

    return 0;
}








// Time Complexity (TC) and Space Complexity (SC) Analysis of N-Queens Solution
// Time Complexity (TC) Analysis
// The time complexity of the N-Queens problem is influenced by the fact that we are making recursive calls while trying to place queens in different columns.

// Recursive Tree Growth:

// At each column, we attempt to place a queen in N possible rows.
// If a placement is valid, we move to the next column and repeat.
// In the worst case, we explore all possible placements before finding a valid configuration.
// Pruning Using Hashmaps:

// We use hash maps (rowCheck, upperLeftDiagnolCheck, and bottomLeftDiagnolCheck) to keep track of which rows and diagonals are occupied.
// This avoids unnecessary checks and reduces redundant calculations compared to the brute-force approach.
// Backtracking Growth:

// Without optimizations, the number of recursive calls grows exponentially.
// The worst-case number of recursive calls can be estimated as O(N!), since for each column, we try all possible placements, reducing the choices in subsequent steps.
// Optimized Placement Check:

// Standard backtracking solutions typically require checking if a queen can be placed in a row and diagonals in O(N) time.
// Here, with hash maps, checking placement is O(1), significantly reducing unnecessary computations.
// Overall Complexity:

// Since we iterate through N choices per column and proceed recursively, the backtracking approach results in O(N!) complexity.
// With the optimization of O(1) placement checks, we still retain the factorial component, making the final time complexity O(N!).
// Space Complexity (SC) Analysis
// The space complexity is determined by:

// Recursive Stack Space:

// The maximum depth of the recursion tree is N (one recursive call per column).
// Hence, recursion uses O(N) space.
// Board Storage:

// The board is stored in a N × N matrix.
// This takes O(N²) space.
// Hash Maps Storage:

// We use three hash maps:
// rowCheck → Stores O(N) entries.
// upperLeftDiagnolCheck → Stores O(2N - 1) entries.
// bottomLeftDiagnolCheck → Stores O(2N - 1) entries.
// These total to O(4N - 2) ≈ O(N).
// Overall Space Complexity:

// Dominated by O(N²) for storing the board.
// Hash maps contribute O(N).
// Recursion stack contributes O(N).
// Final space complexity: O(N²).
// Summary
// Factor	Complexity
// Time Complexity (TC)	O(N!)
// Space Complexity (SC)	O(N²)
// The algorithm efficiently reduces placement checks to O(1) using hash maps but still has a factorial growth in execution time. The space complexity is O(N²) due to board storage.