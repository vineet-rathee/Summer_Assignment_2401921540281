class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+"){
                int n=st.top();
                st.pop();
                st.top()+=n;
            }
            else if(tokens[i]=="-"){
                int n=st.top();
                st.pop();
                st.top()-=n;
            }
            else if(tokens[i]=="*"){
                int n=st.top();
                st.pop();
                st.top()*=n;
            }
            else if(tokens[i]=="/"){
                int n=st.top();
                st.pop();
                st.top()/=n;
            }
            else
            {
                int n=stoi(tokens[i]);
                st.push(n);
            }
        }
        return st.top();
    }
};