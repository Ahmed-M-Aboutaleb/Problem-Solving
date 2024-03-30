class Solution {
public:
    bool isPalindrome(string s) {
        string filtered;
        for(auto c:s){
            if((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')){
                filtered.push_back(c);
            } else if(c >= 'A' && c <= 'Z'){
                char m = c + ('a' - 'A');
                filtered.push_back(m);
            }
        }
        int l = 0, r = filtered.size() -1;
        while(l <= r) {
            if(filtered[l] != filtered[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};