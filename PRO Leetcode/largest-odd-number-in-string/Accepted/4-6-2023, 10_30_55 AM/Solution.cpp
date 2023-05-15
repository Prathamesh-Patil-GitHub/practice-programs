// https://leetcode.com/problems/largest-odd-number-in-string

class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        for(int i=n-1; i>=0;i--){
            if(num[i] & 1){
                num.erase(i+1, n-1);
                return num;
            }
        }
        return "";
    }
};