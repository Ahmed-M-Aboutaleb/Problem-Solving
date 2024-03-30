class Solution {
public:
    bool isValid(string s) {
        stack<char> mq;
        if(s.size() == 1) return false;
        for(auto ch:s) {
            if(mq.empty()) {
                if(ch == ')' || ch == '}' || ch == ']') return false;
                mq.push(ch);
                continue;
            }
            if(ch == '(' || ch == '[' || ch == '{'){
                mq.push(ch);
            } else if(ch == ')') {
                if(mq.top() == '(') {
                    mq.pop();
                } else {
                    return false;
                }
            } else if(ch == '}') {
                if(mq.top() == '{') {
                    mq.pop();
                } else {
                    return false;
                }
            } else if(ch == ']') {
                if(mq.top() == '[') {
                    mq.pop();
                } else {
                    return false;
                }
            }
        }
        if(mq.size()) return false;
        return true;
    }
};