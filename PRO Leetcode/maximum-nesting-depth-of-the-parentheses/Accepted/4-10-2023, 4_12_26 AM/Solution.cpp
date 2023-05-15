// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses

class Solution {
public:
    int maxDepth(string s) {
        int maxDepth = 0;
        int currDepth = 0;
        for(char ch: s){
            if(ch == '('){
                currDepth++;
            }
            else if(ch == ')'){
                currDepth--;
            }
            maxDepth = max(maxDepth, currDepth);
        }
        return maxDepth;
    }
};