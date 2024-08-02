/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void invert(struct TreeNode* root){
        if(root==NULL)return;

        struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        newNode=root->left;
        root->left=root->right;
        root->right=newNode;      
        
        invert(root->left);
        invert(root->right);
        return;
        

    

}
struct TreeNode* invertTree(struct TreeNode* root) {
    invert(root);
    return (root);

}