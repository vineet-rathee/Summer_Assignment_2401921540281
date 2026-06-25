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
    int ma=0;
    int gen(TreeNode*root)
    {
        if(!root) return 0;
        int a=gen(root->left);
        int b=gen(root->right);
        ma=max(a+b,ma);
        return max(a,b)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        gen(root);
        return ma;
    }
};