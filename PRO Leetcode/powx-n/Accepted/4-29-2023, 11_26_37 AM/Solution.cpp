// https://leetcode.com/problems/powx-n

class Solution {
public:
    double myPow(double x, int n) {
        long long nn = n;
        double ans = 1;
        if(nn<0) nn = -1 * nn;
        while(nn){
            if(nn%2){
                ans = ans*x;
                nn--;
            }
            else{
                x = x*x;
                nn = nn/2;
            }
        }
        if(n<0) return 1/ans;
        return ans;
    }
};