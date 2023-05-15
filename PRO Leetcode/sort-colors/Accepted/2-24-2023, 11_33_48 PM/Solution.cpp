// https://leetcode.com/problems/sort-colors

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int one = 0;
        int two = 0;
        int zero = 0;
        int j=0;
        for(int i:nums){
            if(i == 0) zero++;
            else if(i == 1) one++;
            else two++;
        }
        for(int i=0;i<zero;i++){
            nums[j++] = 0;
        }
        for(int i=0;i<one;i++){
            nums[j++] = 1;
        }
        for(int i=0;i<two;i++){
            nums[j++] = 2;
        }
    }
};