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
        vector<int> rowCount(mat.size(), 0);
        vector<int> colCount(mat[0].size(), 0);
        int i=0, j=0;
        for(int k =0;k<arr.size();k++){
            for(i=0;i<mat.size();i++){
                for(j=0;j<mat[0].size();j++){
                    if(mat[i][j] == arr[k]){
                        rowCount[i]++;
                        colCount[j]++;
                        if(check(rowCount, mat[0].size())){
                            return k;
                        }
                        if(check(colCount, mat.size())){
                            return k;
                        }
                    }
                }
            }
            
        }
        return 0;       
    }
};