class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, res = INT_MIN;
        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < prices[l]) {
                l = i;
            }
            res = max(res, prices[i] - prices[l]);
        }
        return res;
    }
};