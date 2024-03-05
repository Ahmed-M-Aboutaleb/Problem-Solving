#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    int n; cin >> n;
    map<ll, int> mp;
    for (int i = 0; i < n; i++)
    {
        ll x; cin >> x;
        mp[x]++;
    }
    ll res = 0;
    for (auto x:mp)
    {
        if(x.second == 0)
            continue;
        res = max(res, (ll)(x.second + mp[x.first+1]+mp[x.first+2]+mp[x.first+3]+mp[x.first+4]+mp[x.first+5]));
    }
    cout << res;
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