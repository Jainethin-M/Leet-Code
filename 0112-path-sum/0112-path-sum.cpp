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
    

    bool hasPathSum(struct TreeNode* root, int targetSum) {
        if(!root)return false;
        int val = targetSum-root->val;
        if(!root->right && !root->left && !val)return true;
        return hasPathSum(root->left,val) || hasPathSum(root->right,val);

    }
};