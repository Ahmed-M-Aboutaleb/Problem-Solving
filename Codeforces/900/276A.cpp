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
    ll k, f, t; cin >> k;
    ll maxii = LONG_LONG_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> f >> t;
        if(t > k) {
            maxii = max(maxii, f - (t-k));
        } else {
            maxii = max(maxii, f);
        }
    }
    cout << maxii;
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