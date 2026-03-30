class MinStack {
public:
    stack<int> st;
    MinStack() {
       st = stack<int>(); 
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        if(st.empty())
            return ;
        st.pop();
    }
    
    int top() {
        if(st.empty())
            return -1;
        return st.top();
    }
    
    int getMin() {
        int min1 = INT_MAX;
        stack<int>st1(st);
        while(!st1.empty())
        {
            min1 = min(min1,st1.top());
            st1.pop();
        }
        return min1;
    }
};
