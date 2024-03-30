class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() == t.size()) {
            vector<int> frq(255, 0);
            vector<int> frq2(255, 0);
            for(int i = 0; i < s.size(); i++)
                frq[s[i]]++;
            for(int i = 0; i < t.size(); i++)
                frq2[t[i]]++;
            for(int i = 0; i<255; i++) {
                if(frq[i] != frq2[i]) {
                    return false;
                }
            }
            return true;
        } else {
            return false;
        }
    }
};