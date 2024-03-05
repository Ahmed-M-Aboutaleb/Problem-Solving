#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    int count = 0;
    string s, t; cin >> s >> t;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == t[0]) {
            int restLen = s.size() - i;
            if(restLen >= t.size()) {
                bool isValid = true;
                int j = 0;
                while (j < t.size())
                {
                    if(t[j] != s[j+i]) {
                        isValid = 0;
                        break;
                    }
                    j++;
                }
                if(isValid) {
                    count++;
                    i+= t.size()-1;
                }
            }
        }
    }
    cout<< count;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while(t--) {
        solve();
    }
    return 0;
}