// https://leetcode.com/problems/move-zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0, n=nums.size();
        while(i<n && j<n){
            if(nums[j]!=0){
                j++;
            }
            else{
                if(nums[i]==0 || i<=j){
                    i++;
                }else{
                    nums[j] = nums[i];
                    nums[i] = 0;
                }
            }
        }
    }
};