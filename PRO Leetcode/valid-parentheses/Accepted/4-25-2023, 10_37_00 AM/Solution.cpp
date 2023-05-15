// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(char ch:s){
            if(ch == '(' || ch == '{' || ch == '[') stk.push(ch);
            else{
                if(stk.empty()) return false;
                else if(ch == ')' && stk.top()!='(') return false;
                else if(ch == ']' && stk.top()!='[') return false;
                else if(ch == '}' && stk.top()!='{') return false;
                else stk.pop();
            }
        }
        if(stk.size() == 0) return true;
        else return false;
    }
};