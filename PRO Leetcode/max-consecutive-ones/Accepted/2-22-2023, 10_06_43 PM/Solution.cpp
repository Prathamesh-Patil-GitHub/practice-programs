// https://leetcode.com/problems/max-consecutive-ones

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int ans = 0, count = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == 1) count++;
            else count = 0;
            ans = max(ans, count);
        }
        return ans;
    }
};