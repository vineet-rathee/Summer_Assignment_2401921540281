/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    void gen(TreeNode*root,string &ans)
    {
        if(root==NULL)
        {
            ans+="N,";
            return;
        }
        ans+=to_string(root->val);
        ans+=",";
        gen(root->left,ans);
        gen(root->right,ans);
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==NULL) return "";
        string ans="";
        gen(root,ans);
        return ans;
    }

    TreeNode* create(vector<string> &ans,int &i)
    {
        if(i==ans.size()) return NULL;
        if(ans[i]=="N")
        {
            i++;
            return NULL;
        }
        TreeNode* root=new TreeNode(stoi(ans[i]));
        i++;
        root->left=create(ans,i);
        root->right=create(ans,i);
        return root;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        stringstream ss(data);
        string it;
        vector<string> ans;
        while(getline(ss,it,','))
        {
            if(!it.empty()) ans.push_back(it);
        }
        int i=0;
        return create(ans,i);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
