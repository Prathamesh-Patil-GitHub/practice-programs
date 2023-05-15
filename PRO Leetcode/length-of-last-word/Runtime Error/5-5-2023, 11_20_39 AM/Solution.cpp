// https://leetcode.com/problems/length-of-last-word

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int i = s.length()-1;
        while(s[i] == ' ') i--;
        while(s[i] != ' ') i--, count++;

        return count;
    }
};