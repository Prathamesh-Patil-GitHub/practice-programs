// https://leetcode.com/problems/find-the-distinct-difference-array

class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i=0;i<n;i++){
            ans.push_back((i+1)-(n-(i+1)));
        }
        return ans;
    }
};