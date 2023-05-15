// https://leetcode.com/problems/n-queens

class Solution {
public:

    bool isSafe(vector<string> &board, int row, int col, int n){
        int rowDup = row, colDup = col;

        while(row>=0 && col>=0){
            if(board[row][col] == 'Q') return false;
            row--, col--;
        }

        row = rowDup, col = colDup;
        while(col>=0){
            if(board[row][col] == 'Q') return false;
            col--;
        }

        col = colDup;
        while(row<n && col>=0){
            if(board[row][col] == 'Q') return false;
            row++, col--;
        }
        
        return true;
    }

    void solve(int col, vector<vector<string>> &ans, vector<string> &board, int n){
        if(col == n){
            ans.push_back(board);
            return;
        }

        for(int row=0;row<n;row++){
            if(isSafe(board, row, col, n)){
                board[row][col] = 'Q';
                solve(col+1, ans, board, n);
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board;
        string s(n, '.');
        for(int i=0;i<n;i++){
            board.push_back(s);
        }
        solve(0, ans, board, n);

        return ans;
    }
};