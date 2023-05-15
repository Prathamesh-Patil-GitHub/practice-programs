// https://leetcode.com/problems/search-a-2d-matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0;
        for(i;i<matrix.size();i++){
            if(matrix[i][0] == target) return true;
            if(matrix[i][0] > target) break;
        }
        i--;
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j] == target) return true;
        }
        return false;

    }
};