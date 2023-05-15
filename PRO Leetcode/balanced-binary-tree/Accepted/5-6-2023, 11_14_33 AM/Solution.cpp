// https://leetcode.com/problems/balanced-binary-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int getHeight(TreeNode *root, bool &ans){
        if(!root || !ans){
            return 0;
        }

        int left = getHeight(root->left, ans);
        int right = getHeight(root->right, ans);
        if(abs(left-right)>1){
            ans = false;
        }
        return max(left, right)+1;
    }


    bool isBalanced(TreeNode* root) {
        
        bool ans = true;
        getHeight(root, ans);
        return ans;
    }
};