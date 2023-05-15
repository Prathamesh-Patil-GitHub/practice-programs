// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    string reverseWords(string s) {
        string output = "", temp = "";
        s.erase(s.find_last_not_of(" ") + 1);
        s.erase(0,s.find_first_not_of(" "));
        for(int i=0;i<s.size();i++){
            
            if(i!=s.size()-1 && s[i]==' ' && s[i+1]==' ') continue;
            
            if(s[i] == ' '){
                output = " "+temp+output;
                temp = "";
            }
            else{
                temp += s[i];
            }
        }
        return temp+output;
    }
};