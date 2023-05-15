// https://leetcode.com/problems/string-to-integer-atoi

class Solution {
public:
    int myAtoi(string s) {
        s.erase(0, s.find_first_not_of("\t\n\v\f\r ")); 
        if(s=="") return 0;
        stringstream ss(s);
        int x;
        ss>>x;
        return x; 
    }
};