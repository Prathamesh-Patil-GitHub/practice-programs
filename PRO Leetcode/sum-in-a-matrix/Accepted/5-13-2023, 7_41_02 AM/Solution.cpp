// https://leetcode.com/problems/sum-in-a-matrix

class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int ans = 0;
        for(int k=0;k<nums[0].size();k++){
            int maxo = INT_MIN;
            for(int i=0;i<nums.size();i++){
                int maxi = INT_MIN;
                int ind = 0;
                for(int j=0;j<nums[0].size();j++){
                    if(nums[i][j] > maxi){
                        ind = j;
                        maxi = nums[i][j];
                    }
                }
                nums[i][ind] = -1;
                maxo = max(maxo, maxi);
            }
            ans += maxo;
        }
        return ans;
    }
};