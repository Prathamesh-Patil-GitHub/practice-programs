// https://leetcode.com/problems/subsets

class Solution {
public:

    void generate(vector<vector<int>> &ans, vector<int> curr, vector<int> nums, int index, int n){
        if(index == n){
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[index]);
        generate(ans, curr, nums, index+1, n);
        curr.pop_back();
        generate(ans, curr, nums, index+1, n);
    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        generate(ans, {}, nums, 0, nums.size());
        return ans;
    }
};