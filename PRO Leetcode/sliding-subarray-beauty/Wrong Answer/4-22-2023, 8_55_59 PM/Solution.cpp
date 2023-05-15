// https://leetcode.com/problems/sliding-subarray-beauty

class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        vector<int> ans;
        int i=0;
        int j=0;
        int n = nums.size();
        int count = 0;
        vector<int> temp;
        while(j<=n && i<n){
            if(j-i+1>k){
                vector<int> copy(temp);
                i++;
                if(temp.size()<x){
                    ans.push_back(0);
                }
                else{
                    sort(temp.begin(), temp.end());
                    ans.push_back(*(temp.begin()+x-1));
                }
                copy.erase(copy.begin(), copy.begin()+1);
                temp = copy;
            }
            temp.push_back(nums[j]);
            j++;
        }
        return ans;
    }
};