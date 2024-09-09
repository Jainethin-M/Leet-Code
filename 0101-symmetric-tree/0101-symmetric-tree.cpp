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
    bool find(TreeNode* a,TreeNode* b){
        if(a && b )return (a->val == b->val) && find(a->left,b->right) && find(b->left,a->right);
        else if(a || b)return false;
        else return true;
    }
    bool isSymmetric(TreeNode* root) {
        return find(root->left,root->right);
    }

};