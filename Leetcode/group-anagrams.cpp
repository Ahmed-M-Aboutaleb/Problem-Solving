class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> store;
        for(int i = 0; i < strs.size(); i++) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            if(store.find(temp) == store.end()) {
                vector<string> ses;
                ses.push_back(strs[i]);
                store[temp] = ses;
            } else {
                store[temp].push_back(strs[i]);
            }
        }
        for ( const auto &myPair : store ) {
            res.push_back(myPair.second);
        }
        return res;
    }
};