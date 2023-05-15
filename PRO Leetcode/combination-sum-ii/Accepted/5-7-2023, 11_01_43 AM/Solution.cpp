// https://leetcode.com/problems/combination-sum-ii

class Solution {
public:
    void findCombination(vector<vector<int>> &ans, vector<int> &candidates, int target, int index, vector<int> &ds){
        if(target == 0){
            ans.push_back(ds);
            return;
        }

        for(int i=index;i<candidates.size();i++){
            if(i>index && candidates[i] == candidates[i-1]) continue;
            if(candidates[i]>target) break;

            ds.push_back(candidates[i]);
            findCombination(ans, candidates, target-candidates[i], i+1, ds);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(ans, candidates, target, 0, ds);
        return ans;
    }
};