// https://leetcode.com/problems/majority-element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, element = nums[0];
        for(int num: nums){
            if(count == 0){
                element = num;
            }
            if(num == element) count++;
            else count--;
        }
        
        return element;
    }
};