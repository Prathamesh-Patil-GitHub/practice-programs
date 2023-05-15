// https://leetcode.com/problems/merge-sorted-array

class Solution {
public:
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
        int j=0;
        for(int i=n;i<n+m;i++){
            nums1[i] = nums2[j++];
        }
        sort(nums1.begin(), nums1.end());
    }
};