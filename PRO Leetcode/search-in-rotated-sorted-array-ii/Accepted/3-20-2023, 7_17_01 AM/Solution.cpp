// https://leetcode.com/problems/search-in-rotated-sorted-array-ii

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        bool ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)
                ans=1;
        }
        return ans;
    }
};