// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated

class Solution {
public:
    bool check(vector<int>& nums) {
        int size = nums.size();
        int counter = 0;
        for(int i = 0; i < size; i++)
        {
            if(nums[i] > nums[(i+1)%size])
            {
                counter++;
            }
        }
        if(counter <= 1)
        {
            return true;
        }else{
            return false;
        }
    }
};