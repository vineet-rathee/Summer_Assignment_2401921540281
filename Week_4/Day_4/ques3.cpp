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
    int ma=INT_MIN;
    int gen(TreeNode* root)
    {
        if(!root) return 0;
        int a=max(0,gen(root->left));
        int b=max(0,gen(root->right));
        ma=max(ma,a+b+root->val);
        return max(a,b)+root->val;
    }
public:
    int maxPathSum(TreeNode* root) {
        gen(root);
        return ma;
    }
};