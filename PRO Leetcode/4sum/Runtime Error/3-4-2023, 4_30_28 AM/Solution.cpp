// https://leetcode.com/problems/4sum

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> collect;
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int low = j+1, hi = n-1;
                while(low<hi){
                    long sum = (nums[i] + nums[j] + nums[low] + nums[hi])%(INT_MAX);
                    if(sum == target){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[hi]);
                        collect.insert(temp);
                    }
                    if(sum < target){
                        low++;
                    }
                    else{
                        hi--;
                    }
                }
            }
        }

        vector<vector<int>> res;
        for(auto it: collect) res.push_back(it);
        return res;
    }
};