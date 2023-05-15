// https://leetcode.com/problems/remove-element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0, j=0;
        int count = 0;
        while(i<nums.size() && j<nums.size()){
            while(j<nums.size() && nums[j] == val){
                j++;
            }
            if(j<nums.size()){
                nums[i] = nums[j];
                count++;
                i++;
                j++;
            }
        }
        return count;
    }
};