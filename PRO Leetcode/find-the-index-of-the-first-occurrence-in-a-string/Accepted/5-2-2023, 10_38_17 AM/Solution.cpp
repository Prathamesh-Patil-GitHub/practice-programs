// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
        int num = haystack.find(needle);
        return num==-1?-1:num;
    }
};