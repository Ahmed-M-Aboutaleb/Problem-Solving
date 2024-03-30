class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> res;
        for(auto m: nums) {
            mp[m]++;
        }
        vector<pair<int, int> > A;
        for (auto& it : mp) {
            A.push_back(it);
        }
        sort(A.begin(), A.end(), cmp);
        for(auto mm: A) {
            if(k != 0) {
                res.push_back(mm.first);
                k--;
            }
        }
        return res;
    }
private:
    static bool cmp(pair<int, int>& a, pair<int, int>& b)
        {
            return a.second > b.second;
        }
};