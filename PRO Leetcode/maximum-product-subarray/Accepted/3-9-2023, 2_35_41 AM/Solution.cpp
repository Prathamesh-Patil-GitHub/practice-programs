// https://leetcode.com/problems/maximum-product-subarray

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxLeft = nums[0];
        int maxRight = nums[0];
        int prod = 1;
        bool zeroPresent = false;
        for(int num:nums){
            prod *= num;
            if(num == 0){
                prod = 1;
                zeroPresent = true;
                continue;
            }
            maxLeft = max(maxLeft, prod);
        }
        prod = 1;
        for(int i=nums.size()-1; i>=0;i--){
            prod *= nums[i];
            if(nums[i] == 0){
                prod = 1;
                zeroPresent = true;
                continue;
            }
            maxRight = max(maxRight, prod);
        }
        if(zeroPresent) return max(max(maxLeft, maxRight), 0);
        else return max(maxLeft, maxRight);
    }
};