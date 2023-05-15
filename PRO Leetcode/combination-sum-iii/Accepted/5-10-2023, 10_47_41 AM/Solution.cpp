// https://leetcode.com/problems/combination-sum-iii

class Solution {
public:

    void findCombination(int sum, int i, vector<vector<int>> &ans, vector<int> &ds, int k, int n){
        if(k == 0 && sum == n){
            ans.push_back(ds);
            return;
        }
        if(k == 0 || i>9 || sum+i>n) return;
        
        ds.push_back(i);
        findCombination(sum+i, i+1, ans, ds, k-1, n);
        ds.pop_back();
        findCombination(sum, i+1, ans, ds, k, n);
    }

    vector<vector<int>> combinationSum3(int K, int N) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0, 1, ans, ds, K, N);
        return ans;
    }
};