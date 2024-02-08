#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    int n, l = 0, ans = 0; cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        l = max(l, mp[x]);
        ans = max(ans, i-l);
        mp[x] = i;
    }
    cout <<ans;
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