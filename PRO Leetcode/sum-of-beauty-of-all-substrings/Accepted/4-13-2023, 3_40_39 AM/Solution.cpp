// https://leetcode.com/problems/sum-of-beauty-of-all-substrings

class Solution {
public:

    int beauty(int freq[]){
        int mini = INT_MAX;
        int maxi = INT_MIN;

        for(int i=0; i<26; i++){
            if(freq[i]){
                mini = min(mini, freq[i]);
                maxi = max(maxi, freq[i]);
            }
        }
        return maxi-mini;
    }

    int beautySum(string s) {
        int sum = 0;
        for(int i=0;i<s.length();i++){
            int freq[26]{0};
            for(int j=i;j<s.length();j++){
                freq[s[j]-'a']++;
                sum += beauty(freq);
            }
        }
        return sum;
    }
};