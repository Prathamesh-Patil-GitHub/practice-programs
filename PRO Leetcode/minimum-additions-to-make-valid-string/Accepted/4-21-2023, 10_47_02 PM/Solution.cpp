// https://leetcode.com/problems/minimum-additions-to-make-valid-string

class Solution {
public:
    int addMinimum(string word) {
        int i=0, count = 0;
        while(i<word.length()){
            word[i]=='a'?i++:count++;
            word[i]=='b'?i++:count++;
            word[i]=='c'?i++:count++;
        }
        return count;
    }
};