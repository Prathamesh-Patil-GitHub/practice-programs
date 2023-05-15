// https://leetcode.com/problems/single-number

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int acc = 0;
        for(int num:nums){
            acc = acc ^ num;
        }
        return acc;
    }
};