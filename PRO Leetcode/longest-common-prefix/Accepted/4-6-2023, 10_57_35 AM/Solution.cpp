// https://leetcode.com/problems/longest-common-prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strings) {
        int n = strings.size();
        if(n == 0) return "";

        if(n == 1) return strings[0];
        
        sort(strings.begin(), strings.end());

        int l = min(strings[0].length(), strings[n-1].length());

        string res = "";
        int i = 0;
        while(i<l && strings[0][i] == strings[n-1][i]){
            res += strings[0][i];
            i++;
        }

        return res;
    }
};