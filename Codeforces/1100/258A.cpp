#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    string s; cin >> s;
    int indexx = s.size() - 1;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '0') {
            indexx = i;
            break;
        }
    }
    s.erase(indexx,1);
    cout << s;
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