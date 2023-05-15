// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum = 0;
        for(int num:nums){
            sum += num;
            maxi = max(maxi, sum);
            if(sum<0) sum = 0;
        }
        return maxi;
    }
};