class Solution {
    void gen(map<vector<int>,vector<string>> &mp,string s)
    {
        vector<int> temp(26,0);
        for(auto it:s)
        {
            temp[it-'a']++;
        }
        mp[temp].push_back(s);
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> mp;
        for(auto it:strs) gen(mp,it);
        vector<vector<string>> ans;
        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};