// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        int j=0;
        int count = needle.size();
        while(i<haystack.size() && j<haystack.size()){
            while(haystack[j] == needle[j-i]){
                j++;
                if(j-i == count) return i;
            }
            if(j==i){
                i++;
                j++;
            }
            else i = j;
        }
        return -1;
    }
};