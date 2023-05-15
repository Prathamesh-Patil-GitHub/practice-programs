// https://leetcode.com/problems/number-of-senior-citizens

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(string str: details){
            string temp = str.substr(11, 2); 
            if(stoi(temp) > 60) count++;
        }
        return count;
    }
};