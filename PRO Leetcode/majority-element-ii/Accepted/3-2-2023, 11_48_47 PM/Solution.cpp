// https://leetcode.com/problems/majority-element-ii

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> countMap;
        vector<int> res;
        int check = nums.size()/3;
        for(int num:nums) countMap[num]++;
        for(auto it:countMap)
            if(it.second>check)
                res.push_back(it.first);
        
        return res;
    }
};