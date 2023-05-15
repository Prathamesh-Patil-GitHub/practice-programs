// https://leetcode.com/problems/minimum-additions-to-make-valid-string

class Solution {
public:
    int addMinimum(string word) {
        int aCount = 0, bCount = 0, cCount = 0;
        for(char ch:word){
            if(ch == 'a') aCount++;
            else if(ch == 'b') bCount++;
            else if(ch == 'c') cCount++;
        }
        return abs(aCount-bCount)+abs(aCount-cCount)+abs(bCount-cCount);
    }
};