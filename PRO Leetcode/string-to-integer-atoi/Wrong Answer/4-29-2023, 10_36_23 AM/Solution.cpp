// https://leetcode.com/problems/string-to-integer-atoi

class Solution {
public:

    int myatoi(string str, int n){
        if(n == 1) return str[0]-'0';

        return (10*myatoi(str, n-1)+str[n-1]-'0');
    }

    int myAtoi(string s) {
        int n = s.length()-1;
        while(isalpha(s[n]) || s[n] == ' ') n--;

        int i=0;
        while(isalpha(s[i]) || s[i] == ' ') i++;
        if(s[i] == '-'){
            return -1*myatoi(s.substr(i+1, n-i), n-i);
        }
        else{
            return myatoi(s.substr(i, n-i+1), n-i+1);
        }
        
    }
};