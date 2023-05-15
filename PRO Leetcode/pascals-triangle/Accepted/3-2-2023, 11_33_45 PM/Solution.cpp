// https://leetcode.com/problems/pascals-triangle

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> pascal(numRows);
         for(int line=0;line<numRows;line++){
             for(int i=0;i<=line;i++){
                 if(i==0 || i==line)
                    pascal[line].push_back(1);
                else
                    pascal[line].push_back((pascal[line-1][i-1]+pascal[line-1][i]));
             }
         }
         return pascal;
    }
};