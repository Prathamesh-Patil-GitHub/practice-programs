// https://leetcode.com/problems/n-queens

class Solution {
public:
    void solve(int col, vector<vector<string>> &ans, vector<string> &board, int n, vector<int> &leftRow, vector<int> &upperDig, vector<int> &lowerDig){
        if(col == n){
            ans.push_back(board);
            return;
        }

        for(int row=0;row<n;row++){
            if(board[row][col] != 'Q' && leftRow[row] == 0 && lowerDig[row+col] == 0 && upperDig[(n-1)+(col-row)] == 0){
                board[row][col] = 'Q';
                leftRow[row] = 1;
                lowerDig[row+col] = 1;
                upperDig[(n-1)+(col-row)] = 1;
                solve(col+1, ans, board, n, leftRow, upperDig, lowerDig);
                leftRow[row] = 0;
                lowerDig[row+col] = 0;
                upperDig[(n-1)+(col-row)] = 0;
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board;
        string s(n, '.');
        vector<int> leftRow(n, 0), upperDig(2*n-1, 0), lowerDig(2*n-1, 0);
        for(int i=0;i<n;i++){
            board.push_back(s);
        }
        solve(0, ans, board, n, leftRow, upperDig, lowerDig);

        return ans;
    }
};