// https://leetcode.com/problems/remove-element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0, N = nums.size();
        for (int i = 0; i < N; ++i) {
            if (nums[i] != val) nums[j++] = nums[i];
        }
        return j;
    }
};