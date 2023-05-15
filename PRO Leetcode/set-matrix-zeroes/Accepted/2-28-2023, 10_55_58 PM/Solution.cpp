// https://leetcode.com/problems/set-matrix-zeroes

class Solution {
public:
     void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
       vector<pair<int,int>> mp;
        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                if(matrix[i][j]==0) mp.push_back(make_pair(i,j));

        for(auto i:mp){
            int j=0;
            while(j<cols){
                matrix[i.first][j]=0;
                j++;
            }
            j=0;
              while(j<rows){
                matrix[j][i.second]=0;
                j++;
            }
        }
    }
};