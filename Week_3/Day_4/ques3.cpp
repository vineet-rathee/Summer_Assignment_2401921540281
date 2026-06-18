class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> pre(n),fut(n);
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            if(st.empty()) pre[i]=-1;
            else pre[i]=st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            if(st.empty()) fut[i]=n;
            else fut[i]=st.top();
            st.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int wid=fut[i]-pre[i]-1;
            ans=max(ans,wid*heights[i]);
        }
        return ans;
    }
};