/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool sum(struct TreeNode* root,int t){
    if(root==NULL)return 0;
    t-=root->val;
    if(root->right==NULL&&root->left==NULL&&t==0)return 1;
    return sum(root->left,t)||sum(root->right,t);
}
bool hasPathSum(struct TreeNode* root, int targetSum) {
    return sum(root,targetSum);

}