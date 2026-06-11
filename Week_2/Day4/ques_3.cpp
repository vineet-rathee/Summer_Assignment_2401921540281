class Solution {
    void gen(vector<string> &ans,int l,int r,int &n,string curr)
    {
        if(l==n && r==n) 
        {
            ans.push_back(curr);
            return;
        }
        if(l<n) gen(ans,l+1,r,n,curr+'(');
        if(r<n && r<l) gen(ans,l,r+1,n,curr+')');
    }

public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        gen(ans,0,0,n,"");
        return ans;
    }
};