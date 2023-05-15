// https://leetcode.com/problems/letter-combinations-of-a-phone-number

class Solution {
public:

    void findCombination(vector<string> &ans, unordered_map<int, string> &um, int i, string str, string digits){
        if(str.length() == digits.length()){
            ans.push_back(str);
            return;
        }

        string currStr = um[digits[i]-'0'];
        for(int j=0;j<currStr.length();j++){
            findCombination(ans, um, i+1, str+currStr[j], digits);
        }
    }


    vector<string> letterCombinations(string digits) {
        if(digits == "") return {};
        
        vector<string> ans;
        unordered_map<int, string> um;
        um[2] = "abc";
        um[3] = "def";
        um[4] = "ghi";
        um[5] = "jkl";
        um[6] = "mno";
        um[7] = "pqrs";
        um[8] = "tuv";
        um[9] = "wxyz";

        findCombination(ans, um, 0, "", digits);
        return ans;
    }
};