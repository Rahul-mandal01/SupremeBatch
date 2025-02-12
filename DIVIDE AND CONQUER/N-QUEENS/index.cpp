// -------------------------LEETCODE ---> 51 --------------------------
// Hard
// Topics
// Companies
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


#include<iostream>
#include<vector>
using namespace std;

void printSolution(vector<vector<char> > &board, int n){
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
}

bool isSafe(int row, int col, vector<vector<char>> &board, int n){
    // WANT TO CHECK WHETHER I CAN KEEP QUEEN ON CURRENT CELL OR NOT [ROW][COL]
    int i = row;
    int j= col;

    // CHECK FOR LEFT ROW
    while(j>=0){
        if(board[i][j] == 'Q'){
            return false;
        }
        j--;
    }

    // CHECK FOR UPPER LEFT DIAGONAL
    i = row;
    j = col;
    while(i>=0 && j>=0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i--;
        j--;
    }

    // CHECK FOR LOWER LEFT DIAGONAL
    i = row;
    j = col;
    while(i<n && j>=0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i++;
        j--;
    }

    // YOU FOUND QUEEN NO WHERE, THAT MEANS THIS IS SAFE POSITION TO KEEP QUEEN

    return true;
}

void solve(vector<vector<char>> &board, int col, int n){
    // BASE CASE
    if(col >= n){
        printSolution(board, n);
        return;
    }

    // 1 CASE SOLVE KARNA HAI BAAKI RECURSION SAMBHAL LEGA
    for(int row = 0; row< n; row++){
        if(isSafe(row, col, board, n)){
            // RAKH DO
            board[row][col] = 'Q';

            // RECURSIVE CALL
            solve(board, col+1, n);

            // BACKTRACKING
            board[row][col] = '-';
        }
    }
}


int main(){
    int n = 9;
    vector<vector<char>> board(n, vector<char>(n, '-'));
    int col = 0;
    // '-' indicates Empty cell
    // 'Q' indicates Queen cell
    solve(board, col, n);

    return 0;

}