// https://leetcode.com/problems/palindrome-partitioning

class Solution {
public:
    bool isPalindrome(string str, int start, int end){
        while(start<=end){
            if(str[start++] != str[end--]) return false;
        }
        return true;
    }

    void findCombination(vector<vector<string>> &ans, vector<string> &path, int index, string s){
        if(index == s.length()){
            ans.push_back(path);
            return;
        }
        for(int i=index;i<s.length();i++){
            if(isPalindrome(s, index, i)){
                path.push_back(s.substr(index, i-index+1));
                findCombination(ans, path, i+1, s);
                path.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        findCombination(ans, path, 0, s);
        return ans;
    }

};