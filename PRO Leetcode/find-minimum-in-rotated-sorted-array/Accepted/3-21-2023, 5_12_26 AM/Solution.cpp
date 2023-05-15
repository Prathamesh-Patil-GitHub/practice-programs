// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size()-1;
        while(low<high){
            int mid = (high+low)>>1;
            if(nums[mid] > nums[high]){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        return nums[low];
    }
};