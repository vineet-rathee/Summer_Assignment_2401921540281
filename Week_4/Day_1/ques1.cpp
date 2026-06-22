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
    int gen(TreeNode* root)
    {
        if(root==NULL) return 0;
        int a=0;
        int b=0;
        if(root->left) a=gen(root->left);
        if(root->right) b=gen(root->right);
        return 1+max(a,b);
    }
public:
    int maxDepth(TreeNode* root) {
        return gen(root);
    }
};