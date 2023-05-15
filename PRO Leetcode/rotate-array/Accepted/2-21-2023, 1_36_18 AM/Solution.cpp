// https://leetcode.com/problems/rotate-array

class Solution {
public:
    void rotate(vector<int> &nums, int k) {
        int n=nums.size();
        k=k%n;
        flip(nums,0,n-k-1);
        flip(nums,n-k,n-1);
        flip(nums,0,n-1);
    }
    void flip(vector<int> &arr,int s,int e)
    {
        while(s<e)
        {
            int temp=arr[s];
            arr[s]=arr[e];
            arr[e]=temp;
            s++;
            e--;
        }
    }
};