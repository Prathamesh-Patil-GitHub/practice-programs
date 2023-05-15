// https://leetcode.com/problems/majority-element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> countMap;
        for(int i:nums){
            countMap[i]++;
            if(countMap[i]>n/2){
                return i;
            }
        }
        
        return -1;
    }
};