class MinStack {
public:
    stack<pair<int,int>> st;
    int mi=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        mi=min(val,mi);
        st.push(make_pair(val,mi));
    }
    
    void pop() {
        st.pop();
        if(!st.empty())
        mi=st.top().second;
        else mi=INT_MAX;
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
       return st.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */