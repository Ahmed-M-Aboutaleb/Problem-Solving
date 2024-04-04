class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, res = 0;
        unordered_map<char, int> window;
        for(int r = 0; r < s.size(); r++) {
            if(window.count(s[r]) > 0) {
                l = window[s[r]]+1 >= l ? window[s[r]]+1 : l;
                window.erase(s[r]);
            }
            res = max(res, r-l+1);
            window[s[r]] = r;
        }
        return res;
    }
};