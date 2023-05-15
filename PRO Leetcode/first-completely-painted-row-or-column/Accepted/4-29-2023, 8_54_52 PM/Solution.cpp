// https://leetcode.com/problems/first-completely-painted-row-or-column

class Solution {
public:
    bool check(vector<int> &arr, int n){
        for(int num:arr){
            if(num>=n){
                return true;
            }
        }
        return false;
    }
    
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> row_counts(m, 0);
        vector<int> col_counts(n, 0);
        unordered_map<int, pair<int, int>> pos_map;
        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                pos_map[mat[r][c]] = make_pair(r, c);
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            int val = arr[i];
            int row = pos_map[val].first;
            int col = pos_map[val].second;
            mat[row][col] = -1;
            row_counts[row]++;
            col_counts[col]++;
            if (row_counts[row] == n || col_counts[col] == m) {
                return i;
            }
        }

        return -1;
    }
    
//     int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        
        
        
//         // vector<int> rowCount(mat.size(), 0);
//         // vector<int> colCount(mat[0].size(), 0);
//         // int i=0, j=0;
//         // for(int k =0;k<arr.size();k++){
//         //     for(i=0;i<mat.size();i++){
//         //         for(j=0;j<mat[0].size();j++){
//         //             if(mat[i][j] == arr[k]){
//         //                 rowCount[i]++;
//         //                 colCount[j]++;
//         //                 if(check(rowCount, mat[0].size())){
//         //                     return k;
//         //                 }
//         //                 if(check(colCount, mat.size())){
//         //                     return k;
//         //                 }
//         //             }
//         //         }
//         //     }
            
//         // }
//         // return 0;       
//     }
};