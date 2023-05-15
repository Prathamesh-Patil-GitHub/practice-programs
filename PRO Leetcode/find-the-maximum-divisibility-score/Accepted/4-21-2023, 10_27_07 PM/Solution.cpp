// https://leetcode.com/problems/find-the-maximum-divisibility-score

class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int n = nums.size();
        int outerCount = 0;
        int ans = divisors[0];
        for(int i=0;i<divisors.size();i++){
            int count = 0;
            for(int j=0;j<n;j++){
                if(nums[j]%divisors[i] == 0){
                    count++;
                }
            }
            if(count > outerCount){
                ans = divisors[i];
                outerCount = count;
            }
            if(count == outerCount){
                ans = min(ans, divisors[i]);
            }
        }
        return ans;
    }
};