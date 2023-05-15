// https://leetcode.com/problems/sliding-subarray-beauty

class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> ans, freq(51, 0);
        for(int i=0, j=0;i<n;i++){
            if(nums[i]<0) freq[abs(nums[i])]++;
            if(i-j+1 >= k){
                int count = 0;
                for(int l=50;l>=1;l--){
                    count += freq[l];
                    if(count>=x){
                        ans.push_back(-l);
                        break;  
                    } 
                }
                if(count<x) ans.push_back(0);
                if(nums[j]<0) freq[abs(nums[j])]--;
                j++;
            }
        }
        return ans;
    }
};