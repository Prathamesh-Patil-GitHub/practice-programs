// https://leetcode.com/problems/split-array-largest-sum

class Solution {
public:

    bool isPossible(int mid, vector<int> nums, int k){
        int total = 0;
        int count = 1;
        for(int num: nums){
            total += num;
            if(total>=mid){
                count++;
                total = num;
            }
        }
        return count<=k;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while(low<=high){
            int mid = low+(high-low)/2;
            if(isPossible(mid, nums, k)){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return high;
    }
};