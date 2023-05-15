// https://leetcode.com/problems/longest-consecutive-sequence

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> us;
        int ans = 0;
        for(int num :nums){
            us.insert(num);
        }
        
        for(int num: nums){
            if(us.count(num - 1)) continue;  
            
            int count = 0;
            int currentNum = num;
            while(us.count(currentNum++)){
                count++;
            }
            ans = max(count, ans);
        }
        return ans;
    }
};