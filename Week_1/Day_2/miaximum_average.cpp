class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans;
        double curr=0;
        for(int i=0;i<k;i++) curr+=nums[i];
        ans=curr/k;
        int i=1;
        int j=k;
        while(j<nums.size())
        {
            curr-=nums[i-1];
            curr+=nums[j];
            ans=max(ans,curr/k);
            i++;
            j++;
        }
        return ans;

    }
};