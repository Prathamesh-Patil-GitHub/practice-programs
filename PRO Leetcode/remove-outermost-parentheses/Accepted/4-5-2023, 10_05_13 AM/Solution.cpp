// https://leetcode.com/problems/remove-outermost-parentheses

class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> stk;
        string output = "";
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' && stk.empty()){
                stk.push(s[i]);          
            }
            else if(s[i]=='('){
                stk.push(s[i]);
                output += s[i];
            }
            else if(s[i]==')' && stk.top()=='(' && stk.size()==1){
                stk.pop();
            }
            else{
                output += s[i];
                stk.pop();
            }
        }
        return output;
    }
};