// https://leetcode.com/problems/pascals-triangle-ii

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n = rowIndex+1;
        vector<vector<int>> pascal(n);
        for(int line =0;line<n;line++){
            for(int i=0;i<=line;i++){
                if(i==line || i==0)
                    pascal[line].push_back(1);
                else
                    pascal[line].push_back( pascal[line-1][i-1]+pascal[line-1][i]);
            }
        }
        return pascal[n-1];
    }
};