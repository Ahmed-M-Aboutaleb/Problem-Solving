#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    set<ll> ms;
    int n; cin >> n;
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ms.insert(x);
    }
    cout << ms.size();
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