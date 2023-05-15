// https://leetcode.com/problems/sum-of-all-subset-xor-totals

class Solution {
public:
    void findSum(vector<int> &nums, int &sum, int index, int s){
        if(index == nums.size()){
            sum += s;
            return;
        }
        findSum(nums, sum, index+1, s ^ nums[index]);
        findSum(nums, sum, index+1, s);
    }

    int subsetXORSum(vector<int>& nums) {
        int sum = 0;
        findSum(nums, sum, 0, 0);
        return sum;
    }
};