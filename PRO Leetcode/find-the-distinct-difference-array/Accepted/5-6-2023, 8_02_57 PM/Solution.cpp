// https://leetcode.com/problems/find-the-distinct-difference-array

class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> um;
        vector<int> numn(n, 0);
        vector<int> numm(n, 0);
        int count = 0;
        for(int i=n-1; i>=0; i--){
            if(um[nums[i]]){
                numn[i] = count;
                continue;
            }
            count++;
            numn[i] = count;
            um[nums[i]] = 1;
        }
        um.clear();
        count = 0;
        for(int i=0; i<n; i++){
            if(um[nums[i]]){
                numm[i] = count;
                continue;
            }
            count++;
            numm[i] = count;
            um[nums[i]] = 1;
        }

        for(int i=0; i<n-1; i++){
            ans.push_back(numm[i]-numn[i+1]);
        }
        ans.push_back(numm[n-1]);
        return ans;
    }

};