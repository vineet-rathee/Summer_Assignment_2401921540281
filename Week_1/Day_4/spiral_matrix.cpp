class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int l=0;
        int b=matrix.size()-1;
        int t=0;
        int r=matrix[0].size()-1;
        while(l<=r && t<=b)
        {
            int i=l;
            while(i<=r) ans.push_back(matrix[t][i++]);
            t++;
            i=t;
            while(i<=b) ans.push_back(matrix[i++][r]);
            r--;
            if(t<=b) 
            {   
                i=r;
                while(i>=l) ans.push_back(matrix[b][i--]);
                b--;
                }
            if(l<=r)
            {
                i=b;
                while(i>=t) ans.push_back(matrix[i--][l]);
                l++;
            }
        }
        return ans;
    }
};