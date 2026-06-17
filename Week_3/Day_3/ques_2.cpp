class MinStack {
public:

    stack<int> st;
    int mi=INT_MAX;
    MinStack() {}
    
    void push(int value) {
        st.push(value);
        mi=min(value,mi);
    }
    
    void pop() {
        if(st.top()==mi)
        {
            stack<int> temp=st;
            temp.pop();
            mi=INT_MAX;
            while(!temp.empty())
            {
                mi=min(mi,temp.top());
                temp.pop();
            }
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mi;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */