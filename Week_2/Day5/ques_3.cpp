class Solution {
public:
    string longestPalindrome(string s) {
        int ma=1;
        int st=0;
        for(int i=0;i<s.size();i++)
        {
            int l=i-1;
            int r=i+1;
            while(l>=0 && r<s.size() && s[l]==s[r])
            {
                if(ma<r-l+1)
                {
                    ma=r-l+1;
                    st=l;
                }
                l--;
                r++;
            }

            if(i>0 && s[i]==s[i-1]) 
            {
                l=i-1;
                r=i;
                while(l>=0 && r<s.size() && s[l]==s[r])
                {
                    if(ma<r-l+1)
                    {
                        ma=r-l+1;
                        st=l;
                    }
                    l--;
                    r++;
                }
            }
        }
        return s.substr(st,ma);
    }
};