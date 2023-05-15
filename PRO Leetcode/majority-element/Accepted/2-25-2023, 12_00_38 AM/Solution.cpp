// https://leetcode.com/problems/majority-element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> countMap;
        for(int i:nums){
            countMap[i]++;
        }
        for(auto it:countMap){
            if(it.second > n/2) return it.first;
        }
        return -1;
    }
};