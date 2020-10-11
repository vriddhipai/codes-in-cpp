class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> primary;
    stack<int> minStack;
    MinStack() {
        
    }
    
    void push(int x) {
        
        primary.push(x);
        if(minStack.empty() || x <= minStack.top())
            minStack.push(x);
    }
    
    void pop() {
        
        if(!primary.empty() && !minStack.empty() && minStack.top() == primary.top())
            minStack.pop();
        primary.pop();
            
    }
    
    int top() {
        return primary.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
