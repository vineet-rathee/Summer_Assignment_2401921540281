class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        while(i<s.size())
        {
            int j=i;
            int k=i;
            while(k<s.size() && s[k]!=' ') k++;
            i=k+1;
            k--;
            while(j<k) 
            {
                swap(s[k],s[j]);
                j++;
                k--;
            }
        }
        return s;
    }
};