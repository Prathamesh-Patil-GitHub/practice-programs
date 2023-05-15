// https://leetcode.com/problems/search-insert-position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        while(i<nums.size() && nums[i]<target){
            if(nums[i] == target) return i;
            i++;
        }
        return i;
    }
};