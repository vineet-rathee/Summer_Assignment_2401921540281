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
    void gen(vector<int> &ans,TreeNode* root)
    {
        if(root==NULL) return;
        if(root->left) gen(ans,root->left);
        ans.push_back(root->val);
        if(root->right) gen(ans,root->right);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        gen(ans,root);
        return ans;
    }
};