// https://leetcode.com/problems/single-element-in-a-sorted-array

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int xxor = 0;
        for(int num:nums){
            xxor = xxor ^ num;
        }
        return xxor;
    }
};