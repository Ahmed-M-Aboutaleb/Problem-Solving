class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> ms;
        for(auto tokenz:tokens) {
            if(tokenz == "+"){
                int first = ms.top();
                ms.pop();
                int second = ms.top();
                ms.pop();
                ms.push(first+second);
                continue;
            }
            if(tokenz == "-"){
                int second = ms.top();
                ms.pop();
                int first = ms.top();
                ms.pop();
                ms.push(first-second);
                continue;
            }
            if(tokenz == "*"){
                int second = ms.top();
                ms.pop();
                int first = ms.top();
                ms.pop();
                ms.push(first*second);
                continue;
            }
            if(tokenz == "/"){
                int second = ms.top();
                ms.pop();
                int first = ms.top();
                ms.pop();
                ms.push(first/second);
                continue;
            }
            int token = stoi(tokenz);
            cout << token << endl;
            ms.push(token);
        }
        return ms.top();
    }
};