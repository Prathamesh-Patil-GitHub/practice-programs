// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size()-1;
        while(low<high){
            int mid = (high+low)>>1;
            if(nums[low] <= nums[mid]){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        return nums[low];
    }
};