// https://leetcode.com/problems/search-a-2d-matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ver = 0;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0] == target) return true;
            if(matrix[i][0] > target) break;

            ver = i;
        }

        for(int i=0;i<matrix[0].size();i++){
            if(matrix[ver][i] == target) return true;
        }
        return false;

    }
};