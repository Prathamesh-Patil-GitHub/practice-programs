// https://leetcode.com/problems/single-number

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = 0;
        for(auto x:nums) n = n^x;
        return n;
    }
};