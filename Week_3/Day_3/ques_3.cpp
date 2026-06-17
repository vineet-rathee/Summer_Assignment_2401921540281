class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        int m=nums1.size();
        unordered_map<int,int> mp;
        for(int i=0;i<m;i++) mp[nums1[i]]=i;
        stack<int> st;
        vector<int> ans(m,0);
        for(int j=n-1;j>=0;j--)
        {
            if(mp.find(nums2[j])!=mp.end())
            {
                while(!st.empty() && st.top()<nums2[j]) st.pop();
                if(st.empty()==true) ans[mp[nums2[j]]]=-1;
                else ans[mp[nums2[j]]]=st.top();
                st.push(nums2[j]);
            }
            else st.push(nums2[j]);
        }
        return ans;
    }
};
    