class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> qu;
        for(int i=0;i<k;i++)
        {
            qu.push({nums[i],i});
        }
        vector<int> ans;
        int i=0;
        int j=k-1;
        while(j<nums.size())
        {
            if(j!=k-1) qu.push({nums[j],j});
            while(qu.top().second<i) qu.pop();
            ans.push_back(qu.top().first);
            i++;
            j++;
        }
        return ans;
    }
};