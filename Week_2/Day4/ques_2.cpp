class Solution {
    string gen(string s,int &i)
    {
        string temp="";
        int k=0;
        while(isdigit(s[i]))
        {
            int t=s[i]-'0';
            k=k*10+t;
            i++;
        }
        if(s[i]=='[') i++;
        while(s[i]!=']')
        {
            if(isdigit(s[i])) temp+=gen(s,i);
            else temp+=s[i++];
        }
        if(s[i]==']') i++;
        string ans="";
        while(k--) ans+=temp;
        return ans;
    }
public:
    string decodeString(string s) {
        int i=0;
        string ans="";
        for(;i<s.size();i++)
        {
            if(isdigit(s[i])) {
                ans+=gen(s,i);
                i--;
            }
            else if(i<s.size()) ans+=s[i];
        }
        return ans;
    }
};