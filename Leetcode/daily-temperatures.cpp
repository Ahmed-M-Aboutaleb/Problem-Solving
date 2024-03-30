class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size());
        stack<pair<int,int>> ms;
        for(int i = 0; i< temperatures.size(); i++) {
            while(!ms.empty()&& ms.top().second < temperatures[i]) {
                res[ms.top().first] = i-ms.top().first;
                ms.pop();
            }
            ms.push({i, temperatures[i]});
        }
        return res;
    }
};