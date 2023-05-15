// https://leetcode.com/problems/combination-sum

class Solution {
public:

    void findCombinations(vector<vector<int>> &ans, int index, vector<int> &candidates, int target, vector<int> &ds){
        if(index == candidates.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        
        if(candidates[index]<=target){
            ds.push_back(candidates[index]);
            findCombinations(ans, index, candidates, target-candidates[index], ds);
            ds.pop_back();
        }
        findCombinations(ans, index+1, candidates, target, ds);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombinations(ans, 0, candidates, target, ds);
        return ans;
    }
};