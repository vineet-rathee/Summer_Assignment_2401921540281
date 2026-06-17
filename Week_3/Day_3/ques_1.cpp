class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto it:s)
        {
            if(it=='(' || it=='[' || it=='{') st.push(it);
            else
            {
                if(st.empty()==true) return false;
                if(it==')')
                {
                    if(st.top()=='(') st.pop();
                    else return false;
                }
                if(it=='}')
                {
                    if(st.top()=='{') st.pop();
                    else return false;
                }
                if(it==']')
                {
                    if(st.top()=='[') st.pop();
                    else return false;
                }
            }
        }   
        if(st.empty()==true) return true;
        else return false;
    }
};