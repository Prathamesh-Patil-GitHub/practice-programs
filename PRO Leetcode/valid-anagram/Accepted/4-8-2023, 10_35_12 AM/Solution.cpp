// https://leetcode.com/problems/valid-anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[256]{0};

        for(char ch:s){
            arr[ch]++;
        }
        
        for(char ch:t){
            arr[ch]--;
        }

        for(int i=0;i<256;i++){
            if(arr[i] != 0) return false;
        }

        return true;
    }
};