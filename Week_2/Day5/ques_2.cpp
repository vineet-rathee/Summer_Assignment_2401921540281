class Solution {
public:
    int compress(vector<char>& chars) {
        int curr=1;
        int ans=0;
        int j=0;
        for(int i=1;i<=chars.size();i++)
        {
            if(i<chars.size() && chars[i]==chars[i-1]) curr++;
            else 
            {
                chars[j++]=chars[i-1];
                string s=to_string(curr);
                if(curr!=1) for(auto it:s) chars[j++]=it;
                if(curr==1) ans+=1;
                else ans+=1+s.size();
                curr=1;
            }
        }
        return ans;
    }
};