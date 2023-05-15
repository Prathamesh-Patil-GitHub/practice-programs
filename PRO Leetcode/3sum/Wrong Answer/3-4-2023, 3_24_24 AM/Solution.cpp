// https://leetcode.com/problems/3sum

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums){
        sort(nums.begin(), nums.end());
        vector<vector <int>> res;
        unordered_map<int, int> us;
        int index = 0;
        for(int num:nums){
            us[index++] = num;
        }
        int n = us.size();
        for(int i=0;i<n-2;i++){
            int j=i+1, k=n-1;
            while(j<k){
                int sum = us[i] + us[j] + us[k];
                if(sum == 0){
                    vector<int> temp;
                    temp.push_back(us[i]);
                    temp.push_back(us[j]);
                    temp.push_back(us[k]);
                    res.push_back(temp);
                    break;
                }
                else if(sum > 0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return res;
    }
};