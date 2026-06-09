class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<int> ans;
        if(n>=m)
        {
            vector<int> a(26),b(26);
            for(auto it:p)
            {
                a[it-'a']++;
            }
            for(int i=0;i<m;i++)
            {
                b[s[i]-'a']++;
            }
            if(a==b) ans.push_back(0);
            for(int i=m;i<n;i++)
            {
                b[s[i]-'a']++;
                b[s[i-m]-'a']--;
                if(a==b) ans.push_back(i-m+1);
            }
        }
        return ans;
    }
};