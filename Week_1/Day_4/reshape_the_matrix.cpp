class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> ans(r,vector<int>(c));
        int x=0;
        int y=0;
        int m=mat[0].size();
        int n=mat.size();
        if(n*m!=r*c) return mat;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                ans[i][j]=mat[x][y];
                y++;
                if(y==m)
                {
                    y=0;
                    x++;
                }
                if(x==n) break;
            }
        }
        return ans;
    }
};