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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> qu;
        if(root) qu.push(root);
        while(!qu.empty())
        {
            int s=qu.size();
            vector<int> a;
            while(s--)
            {
                TreeNode* temp=qu.front();
                qu.pop();
                if(temp->left) qu.push(temp->left);
                if(temp->right) qu.push(temp->right);
                a.push_back(temp->val);
            }
            ans.push_back(a);
        }
        return ans;
    }
};