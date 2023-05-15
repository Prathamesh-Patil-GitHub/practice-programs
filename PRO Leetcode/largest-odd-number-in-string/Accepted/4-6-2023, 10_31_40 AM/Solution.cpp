// https://leetcode.com/problems/largest-odd-number-in-string

class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.length()-1; i>=0;i--){
            if(num[i] & 1){
                num.erase(i+1, num.length()-1);
                return num;
            }
        }
        return "";
    }
};