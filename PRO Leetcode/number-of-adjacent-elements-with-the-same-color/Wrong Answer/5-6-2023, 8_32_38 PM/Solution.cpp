// https://leetcode.com/problems/number-of-adjacent-elements-with-the-same-color

class Solution {
public:
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        if(n == 1) return {0};
        
        vector<int> ans;
        vector<int> arr(n, 0);
        
        for(vector<int> query: queries){
            arr[query[0]] = query[1];
            int count = 0, maxi = 0;
            for(int i=0;i<arr.size()-1;i++){
                if(arr[i]!=0 && arr[i] == arr[i+1]){
                    count++;
                }
                else{
                    maxi = max(count, maxi);
                    count = 0;
                }
            }
            maxi = max(count, maxi);
            ans.push_back(maxi);
        }
        return ans;
    }
};