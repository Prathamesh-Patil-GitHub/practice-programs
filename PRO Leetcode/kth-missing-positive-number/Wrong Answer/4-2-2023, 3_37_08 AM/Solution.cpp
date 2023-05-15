// https://leetcode.com/problems/kth-missing-positive-number

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int num = 1;
        int count = 0;
        int i = 0;
        while(i<arr.size()){
            if(arr[i] == num){
                num++;
                i++;
            }
            else{
                count++;
                if(count == k) return num;
                num++;
            }
        }
        return num+k-1;
    }
};