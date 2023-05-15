// https://leetcode.com/problems/sort-characters-by-frequency

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> um;
        for(char ch:s){
            um[ch] += 1;
        }

        vector<pair<char,int>> ans;
        for(pair<int,int> elem: um){
            ans.push_back(elem);
        }
        sort(ans.begin(), ans.end(), [](pair<char,int>&a,pair<char,int>&b){
        if(a.second!=b.second){
            return a.second>b.second;
        }
        else{
            return a.first<b.first;
        }});
        string ansStr="";
        for(auto it: ans){
            for(int i=0;i<it.second;i++){
                ansStr += it.first;
            }
        }
        return ansStr;
    }
};