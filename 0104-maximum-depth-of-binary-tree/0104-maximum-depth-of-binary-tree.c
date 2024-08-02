/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int max(int a,int b){
    if(a<b)return b;
    return a;
}
int finddp(struct TreeNode* root){
    if(root==NULL)return 0;
    int left=finddp(root->left);
    int right=finddp(root->right);
    return 1+max(left,right);
}
int maxDepth(struct TreeNode* root) {
    if(root==NULL)return 0;
    int max=0,cmax=0;
    max=finddp(root);
    return max;
}