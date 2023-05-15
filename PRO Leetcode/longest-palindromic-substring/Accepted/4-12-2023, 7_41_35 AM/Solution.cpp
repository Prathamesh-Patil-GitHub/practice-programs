// https://leetcode.com/problems/longest-palindromic-substring

class Solution {
public:
    int findLength(string s, int l, int r){
        while(l>= 0 && r<s.length() && s[l] == s[r]) l--, r++;
        return r-l-1;
    }
    string longestPalindrome(string s) {
        int n = s.length();
        int start = 0;
        int maxLen = 0;
        for(int i=0;i<n;i++){
            int len1 = findLength(s, i, i);
            int len2 = findLength(s, i, i+1);
            int len = max(len1, len2);

            if(len>maxLen){
                maxLen = len;
                start = i-(len-1)/2;
            }
        }

        return s.substr(start, maxLen);
    }
};