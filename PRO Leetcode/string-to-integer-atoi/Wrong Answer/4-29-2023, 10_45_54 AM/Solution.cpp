// https://leetcode.com/problems/string-to-integer-atoi

class Solution {
public:

    long long myatoi(string str, int n){
        if(n == 1) return str[0]-'0';

        return 10*myatoi(str, n-1)+str[n-1]-'0';
    }

    int myAtoi(string s) {
        int n = s.length()-1;
        while(isalpha(s[n]) || s[n] == ' ') n--;

        int i=0;
        while(s[i] == ' ') i++;
        if(isalpha(s[i])) return 0;
        if(s[i] == '-'){
            long long num = -1*myatoi(s.substr(i+1, n-i), n-i); 
            return (num > INT_MAX)?INT_MAX:(int)num;;
        }
        else{
            long long num = myatoi(s.substr(i, n-i+1), n-i+1);
            return (num > INT_MAX)?INT_MAX:(int)num;
        }
        
    }
};