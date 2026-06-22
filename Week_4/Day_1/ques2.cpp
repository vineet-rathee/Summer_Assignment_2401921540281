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
    void gen(TreeNode* root)
    {
        if(root==NULL) return;
        swap(root->left,root->right);
        if(root->left) gen(root->left);
        if(root->right) gen(root->right);
    }
public:
    TreeNode* invertTree(TreeNode* root) {
        gen(root);
        return root;
    }
};