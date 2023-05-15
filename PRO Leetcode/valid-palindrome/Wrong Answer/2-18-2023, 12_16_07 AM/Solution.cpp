// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        int i=0, j=s.length()-1;
        while(i<=j){
            if(!isalpha(s[i]))
                i++;
            else if(!isalpha(s[j]))
                j--;
            else if(tolower(s[i]) == tolower(s[j])){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};