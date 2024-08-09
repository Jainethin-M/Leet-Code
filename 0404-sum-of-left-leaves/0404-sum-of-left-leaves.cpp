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
    void suml(TreeNode* root,int &sum,bool add){
        if(!root)return ;
        if(add && !root->left && !root->right)sum+=root->val;
        suml(root->left,sum,true);
        suml(root->right,sum,false);
        return;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        suml(root,sum,false);
        return sum;
    }
};