class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans="";
        int i=0;
        while(1)
        {
            char temp;
            if(s[0].size()>i) temp=s[0][i];
            else return ans;
            for(int j=1;j<s.size();j++)
            {
                if(s[j].size()<=i || s[j][i]!=temp) return ans; 
            }
            ans+=temp;
            i++;
        }
        return ans;
    }
};