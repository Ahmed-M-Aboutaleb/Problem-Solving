class MinStack {
    stack<int> ms;
    multiset<int>mss;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        mss.insert(val);
        ms.push(val);
    }
    
    void pop() {
        if(ms.empty()) return;
        mss.erase(mss.find(ms.top()));
        ms.pop();
    }
    
    int top() {
        return ms.top();
    }
    
    int getMin() {
        return *mss.begin();
    }
};