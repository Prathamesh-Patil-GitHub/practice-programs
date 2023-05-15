// https://leetcode.com/problems/subsets-ii

class Solution {
public:

    void findCombination(vector<vector<int>> &ans, vector<int> &nums, vector<int> &ds, int index){
        ans.push_back(ds);
        for(int i=index;i<nums.size();i++){
            if(i>index && nums[i] == nums[i-1]) continue;
            ds.push_back(nums[i]);
            findCombination(ans, nums, ds, i+1);
            ds.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(ans, nums, ds, 0);
        return ans;
    }
};