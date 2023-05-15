// https://leetcode.com/problems/rearrange-array-elements-by-sign

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int posIndex = 0;
        int negIndex = 1;
        vector<int> res(nums.size(),0);
        for(int num : nums){
            if(num >= 0){
                res[posIndex] = num;
                posIndex +=2;
            }
            else{
                res[negIndex] = num;
                negIndex += 2;
            }
        }
        return res;
    }
};