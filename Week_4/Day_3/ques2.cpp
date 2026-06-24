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
    vector<int> ino;
    void in(TreeNode* root)
    {
        if(root==NULL) return;
        in(root->left);
        ino.push_back(root->val);
        in(root->right);
    }
public:
    bool isValidBST(TreeNode* root) {
        in(root);
        for(int i=0;i<ino.size()-1;i++)
        {
            if(ino[i]>=ino[i+1]) return false;
        }
        return true;
    }
};