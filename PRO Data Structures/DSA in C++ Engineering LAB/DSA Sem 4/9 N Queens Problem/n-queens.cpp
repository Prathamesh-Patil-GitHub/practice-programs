/// Author: Prathamesh Patil
#include <iostream>
#include <vector>
using namespace std;

bool canPlace(vector<string> &board, int row, int col, int n){
    int c = col, r = row;
    while(r >= 0){
        if(board[r][c] == 'Q') return false;
        r--;
    }
    c = col, r = row;
    while(r>=0 && c>=0){
        if(board[r][c] == 'Q') return false;
        r--;
        c--;
    }
    c = col, r = row;
    while(r>=0 && c<n){
        if(board[r][c] == 'Q') return false;
        r--;
        c++;
    }
    return true;
}


void solve(vector<string> &board, vector<vector<int>> &ans, int n, int row){
    if(row == n){
        vector<int> temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j] == 'Q'){
                    temp.push_back(j+1);
                }
            }
        }
        ans.push_back(temp);
        return;
    }
    
    for(int col=0; col<n; col++){
        if(canPlace(board, row, col, n)){
            board[row][col] = 'Q';
            solve(board, ans, n, row+1);
        }
        board[row][col] = '.';
    }
}

vector<vector<int>> nQueens(int n){
    vector<string> board;
    string s(n, '.');
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        board.push_back(s);
    }
    solve(board, ans, n, 0);
    return ans;
}


int main() {
    int n;
    cout<<"Enter the number of queens: ";
    cin>>n;
    cout<<"The row wise solution is: "<<endl;
    vector<vector<int>> ans = nQueens(n);
    int index = 1;
    for(auto row : ans){
        cout<<"Solution "<<index++<<": "<<endl;
        for(int col : row){
            string s(n, '_');
            s[col-1] = 'Q';
            for(char ch: s){
                cout<<ch<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}


/*
0) TEST CASE 0:

Enter the number of queens: 4
The row wise solution is: 
Solution 1: 
_ Q _ _ 
_ _ _ Q 
Q _ _ _ 
_ _ Q _ 
Solution 2: 
_ _ Q _ 
Q _ _ _ 
_ _ _ Q 
_ Q _ _ 


1) TEST CASE 1:
Enter the number of queens: 5
The row wise solution is: 
Solution 1: 
Q _ _ _ _ 
_ _ Q _ _ 
_ _ _ _ Q 
_ Q _ _ _ 
_ _ _ Q _ 
Solution 2: 
Q _ _ _ _ 
_ _ _ Q _ 
_ Q _ _ _ 
_ _ _ _ Q 
_ _ Q _ _ 
Solution 3: 
_ Q _ _ _ 
_ _ _ Q _ 
Q _ _ _ _ 
_ _ Q _ _ 
_ _ _ _ Q 
Solution 4: 
_ Q _ _ _ 
_ _ _ _ Q 
_ _ Q _ _ 
Q _ _ _ _ 
_ _ _ Q _ 
Solution 5: 
_ _ Q _ _ 
Q _ _ _ _ 
_ _ _ Q _ 
_ Q _ _ _ 
_ _ _ _ Q 
Solution 6: 
_ _ Q _ _ 
_ _ _ _ Q 
_ Q _ _ _ 
_ _ _ Q _ 
Q _ _ _ _ 
Solution 7: 
_ _ _ Q _ 
Q _ _ _ _ 
_ _ Q _ _ 
_ _ _ _ Q 
_ Q _ _ _ 
Solution 8: 
_ _ _ Q _ 
_ Q _ _ _ 
_ _ _ _ Q 
_ _ Q _ _ 
Q _ _ _ _ 
Solution 9: 
_ _ _ _ Q 
_ Q _ _ _ 
_ _ _ Q _ 
Q _ _ _ _ 
_ _ Q _ _ 
Solution 10: 
_ _ _ _ Q 
_ _ Q _ _ 
Q _ _ _ _ 
_ _ _ Q _ 
_ Q _ _ _ 

*/
