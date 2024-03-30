class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int res = 0;
        if(n == 1) return heights[0];
        stack<pair<int,int>> ms;
        for(int i =0; i <n; i++) {
            int start = i;
            while(!ms.empty() && ms.top().second > heights[i]) {
                int index = ms.top().first;
                int width = i - index;
                int height = ms.top().second;
                ms.pop();
                res = max(res, width*height);
                start = index;
            }
            ms.push({start, heights[i]});
        }
        while(!ms.empty()) {
            int width = n - ms.top().first;
            int height = ms.top().second;
            ms.pop();
            
            res = max(res, height * width);
        }
        return res;
    }
};