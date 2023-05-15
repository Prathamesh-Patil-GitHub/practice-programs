// https://leetcode.com/problems/plus-one

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int i=digits.size()-1;
        int carry = 1;
        for(i;i>=0;i--){
            if(carry){
                ans.push_back((digits[i]+carry)%10);
                carry = (digits[i]+carry)/10;
            }
            else{
                ans.push_back(digits[i]);
            }
        }
        if(carry){
            ans.push_back(1);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};