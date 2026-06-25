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
    bool ans=false;
    void gen(TreeNode* root,int curr,int &target)
    {
        if(ans) return;
        curr+=root->val;
        if(!root->left && !root->right && curr==target) 
        {
            ans=true;
            return;
        }
        if(root->left) gen(root->left,curr,target);
        if(root->right) gen(root->right,curr,target);
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root) gen(root,0,targetSum);
        return ans;
    }
};