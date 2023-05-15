// https://leetcode.com/problems/single-element-in-a-sorted-array

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int xxor = 1;
        for(int num:nums){
            xxor ^= num;
        }
        return xxor;
    }
};