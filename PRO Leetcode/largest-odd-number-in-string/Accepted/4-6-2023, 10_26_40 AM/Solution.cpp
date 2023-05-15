// https://leetcode.com/problems/largest-odd-number-in-string

class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        string temp = "";
        for(char ch : num){
            temp += ch;
            if((int(ch)-48)%2){
                ans = temp;
            }
        }
        return ans;
    }
};