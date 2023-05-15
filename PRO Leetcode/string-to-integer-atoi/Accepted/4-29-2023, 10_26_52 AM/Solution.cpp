// https://leetcode.com/problems/string-to-integer-atoi

class Solution {
public:
    int myAtoi(string s) {
        int myInt = 0;
        stringstream ss(s);
        ss >> myInt;
        return myInt;
    }
};