// https://leetcode.com/problems/valid-anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26]{0};

        for(char ch:s){
            arr[ch-97] += 1;
        }
        
        for(char ch:t){
            arr[ch-97] -= 1;
        }

        for(int i=0;i<26;i++){
            if(arr[i] != 0) return false;
        }

        return true;
    }
};