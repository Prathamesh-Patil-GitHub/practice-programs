// https://leetcode.com/problems/rearrange-array-elements-by-sign

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int> pos;
        queue<int> neg;
        vector<int> res;
        for(int num:nums){
            if(num<0) neg.push(num);
            else pos.push(num);
        }

        for(int i=0;i<nums.size();i++){
            if(!pos.empty()){
                res.push_back(pos.front());
                pos.pop();
            }
            if(!neg.empty()){
                res.push_back(neg.front());
                neg.pop();
            }
        }
        return res;
    }
};