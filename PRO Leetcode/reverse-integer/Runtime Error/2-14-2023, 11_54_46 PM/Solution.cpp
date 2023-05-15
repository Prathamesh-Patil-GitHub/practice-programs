// https://leetcode.com/problems/reverse-integer

class Solution {
public:
    int reverse(int x) {
        int res=0, rem, temp = x;
        while(temp){
            rem = temp%10;
            res =  res*10 + rem;
            temp = temp/10;
        }
        return res;
    }
};