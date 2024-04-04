class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp;
        set<char> curr;
        int r = 0;
        for(int i = 0; i < s.size(); i++) {
            if(mp.count(s[i]) > 0) {
                s[i] = mp[s[i]];
            } else {
                mp[s[i]] = t[r];
                s[i] = t[r];
                curr.insert(t[r]);
                while(curr.count(t[r])>0){
                    r++;
                    if(r > t.size())
                        return false;
                }
            }
        }
        return (s == t);
    }
};