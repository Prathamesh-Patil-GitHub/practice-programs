// https://leetcode.com/problems/generate-parentheses

class Solution {
public:
    void generate(vector<string> &ans, string str, int o, int c){
        if(c<o || c<0 || o<0) return;
        if(c == 0 && o == 0){
            ans.push_back(str);
            return;
        }
        generate(ans, str+"(", o-1, c);
        generate(ans, str+")", o, c-1);
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate(ans, "", n, n);
        return ans;
    }
};