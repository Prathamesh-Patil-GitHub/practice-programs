// https://leetcode.com/problems/number-of-adjacent-elements-with-the-same-color

class Solution {
public:
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        vector<int> ans;
        vector<int> nums(n, 0);

        for (const auto& query : queries) {
            const int i = query[0];
            const int c = query[1];
            nums[i] = c;

            int cnt = 0;
            for (int j = 0; j < n - 1; ++j) {
                if (nums[j] == nums[j + 1] && nums[j] != 0) {
                    ++cnt;
                }
            }
            ans.push_back(cnt);
        }

        return ans;
    }
};