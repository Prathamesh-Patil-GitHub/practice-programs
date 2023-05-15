// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold

class Solution {
public:

    bool check(int mid, vector<int> nums, int threshold){
        int sum=0;
        for(int num:nums){
            sum += ceil(num/float(mid));
        }
        if(sum<=threshold) return true;
        else return false;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = 1e9;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(check(mid, nums, threshold)){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};