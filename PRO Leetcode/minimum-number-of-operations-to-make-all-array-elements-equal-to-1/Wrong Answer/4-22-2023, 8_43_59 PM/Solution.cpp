// https://leetcode.com/problems/minimum-number-of-operations-to-make-all-array-elements-equal-to-1

class Solution {
public:
    int minOperations(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            if(__gcd(nums[i], nums[i+1]) == 1) return nums.size();
        }
        return -1;
    }
};