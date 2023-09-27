class MinStack {
private:
    stack<int>sta;
    stack<int>sta2;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        sta.push(val);
        if(sta2.empty() || sta2.top()>=val)
        {
            sta2.push(val);
        }
    }
    
    void pop() {
        if(sta.top()==sta2.top())
        {
            sta2.pop();
        }
        sta.pop();
    }
    
    int top() {
        return sta.top();
    }
    
    int getMin() {
        return sta2.top();
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