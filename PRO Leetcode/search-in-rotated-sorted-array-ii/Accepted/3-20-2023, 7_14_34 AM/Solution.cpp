// https://leetcode.com/problems/search-in-rotated-sorted-array-ii

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if(nums.end()==find(nums.begin(), nums.end(), target)){
            return false;
        }
        else{
            return true;
        }
    }
};