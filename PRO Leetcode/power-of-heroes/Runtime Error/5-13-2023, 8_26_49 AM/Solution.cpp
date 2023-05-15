// https://leetcode.com/problems/power-of-heroes

class Solution {
public:
    
    void findCombination(vector<int> &nums, vector<int> &ds, int &sum, int index){
        if(index == nums.size()){
            if(ds.size() > 0){
                int maxi = *max_element(ds.begin(), ds.end());
                int mini = *min_element(ds.begin(), ds.end());
                sum += (maxi*maxi) * mini;    
            }
            return;
        }
        
        ds.push_back(nums[index]);
        findCombination(nums, ds, sum, index+1);
        ds.pop_back();
        findCombination(nums, ds, sum, index+1);
    }
    
    int sumOfPower(vector<int>& nums) {
        int sum = 0;
        vector<int> ds;
        findCombination(nums, ds, sum, 0);
        return sum;
    }
};