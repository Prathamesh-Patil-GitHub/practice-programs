// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> compMap;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(compMap[target-nums[i]] == 0) compMap[nums[i]] = i+1;
            else{
                res.push_back(compMap[target-nums[i]]-1);
                res.push_back(i);
                return res;
            }
        }
        return res;
    }
};