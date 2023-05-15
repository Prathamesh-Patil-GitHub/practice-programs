// https://leetcode.com/problems/largest-odd-number-in-string

class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size(),i=n;

        while(i--){
            if((num[i]-48)%2)
                break;
            num.pop_back();
        }

        return num;
    }
};