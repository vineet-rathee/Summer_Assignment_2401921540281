class Solution {
    string rep(string temp,int m)
    {
        string ans="";
        while(m--) ans+=temp;
        return ans;
    }
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        string temp="";
        for(int i=0;i<n;i++)
        {
            temp+=s[i];
            if(n%temp.size()==0 && temp+temp==s.substr(0,temp.size()*2))
            {
                int m=n/temp.size();
                if(rep(temp,m)==s) return true;
            }
        }
        return false;
    }
};