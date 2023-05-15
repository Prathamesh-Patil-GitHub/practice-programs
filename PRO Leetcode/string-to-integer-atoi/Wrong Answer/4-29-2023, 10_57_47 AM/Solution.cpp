// https://leetcode.com/problems/string-to-integer-atoi

class Solution {
public:
    int myAtoi(string s) {
        if(s == "" || s==" ") return 0;
        stringstream ss(s);
        int x;
        ss>>x;
        return x; 
    }
};