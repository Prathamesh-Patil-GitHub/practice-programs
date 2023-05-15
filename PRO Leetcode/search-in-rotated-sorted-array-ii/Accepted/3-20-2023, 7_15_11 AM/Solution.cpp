// https://leetcode.com/problems/search-in-rotated-sorted-array-ii

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int num: nums){
            if(num == target) return true;
        }
        return false;
    }
};