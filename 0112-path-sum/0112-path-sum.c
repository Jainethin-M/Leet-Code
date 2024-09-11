/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool hasPathSum(struct TreeNode* root, int targetSum) {
    if(!root)return false;
    targetSum-=root->val;
    if(!root->right && !root->left && !targetSum)return true;
    return hasPathSum(root->left,targetSum) || hasPathSum(root->right,targetSum);

}