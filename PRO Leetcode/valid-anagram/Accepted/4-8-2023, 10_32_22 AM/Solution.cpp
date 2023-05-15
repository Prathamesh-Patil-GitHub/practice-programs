// https://leetcode.com/problems/valid-anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr1[256]{0}, arr2[256]{0};

        for(char ch:s){
            arr1[ch] += 1;
        }
        
        for(char ch:t){
            arr2[ch] += 1;
        }

        for(int i=0;i<256;i++){
            if(arr1[i] != arr2[i]) return false;
        }

        return true;
    }
};