// https://leetcode.com/problems/longest-consecutive-sequence

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> um;
        int ans = 0;
        for(int i=0;i<n;i++){
            um[nums[i]] = 1;
        }
        
        for(int i=0;i<n;i++){
            if(um[nums[i]-1]) continue;  
            
            int count = 0;
            int j = 0;
            while(um[nums[i] + j++]){
                count++;
            }
            ans = max(count, ans);
        }
        return ans;
    }
};