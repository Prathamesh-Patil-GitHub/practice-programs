// https://leetcode.com/problems/container-with-most-water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1;
        int ans = INT_MIN;
        while(i<j){
            ans = max(ans, (j-i)*min(height[i], height[j]));
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        
        return ans;

    }
};