// https://leetcode.com/problems/string-to-integer-atoi

class Solution {
public:
    int myAtoi(string s) {
        s.erase(s.find_last_not_of(' ')+1);
        s.erase(0, s.find_first_not_of(' '));  
        
        long long int ans = 0;
        int n = s.length();
        int neg = false;
        for(int i=0;i<n;i++){
            if(isalpha(s[i])) break;
            if(s[i] == '-'){
                neg = true;
                if(i>0) break;
                continue;
            }
            if(s[i] == ' ') break;
            if(s[i] == '+' && i>0) break;
            ans = ans*10 + s[i]-48;
        }
        if(neg){
            return ans <= INT_MAX? ans*-1: INT_MAX;
        }
        return ans <= INT_MAX? ans: INT_MAX;
    }
};