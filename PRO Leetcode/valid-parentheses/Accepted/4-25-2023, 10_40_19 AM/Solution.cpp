// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
        string res = "";
        for(char ch:s){
            if(res.size()==0){
                res += ch;
            }
            else{
                if(
                    (res.back()=='(' && ch == ')') ||
                    (res.back()=='{' && ch == '}') ||
                    (res.back()=='[' && ch == ']')){
                    res.pop_back();
                }
                else res += ch;
            }
        }
        if(res.size() == 0) return true;
        else return false;
    }
};