// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses

class Solution {
public:
    int maxDepth(string s) {
        int maxDepth = 0;
        int currDepth = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '('){
                currDepth++;
            }
            else if(s[i] == ')'){
                currDepth--;
            }
            maxDepth = max(maxDepth, currDepth);
        }
        return maxDepth;
    }
};