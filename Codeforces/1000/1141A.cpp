#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    ll n,m; cin >>  n >> m;
    if(m%n == 0) {
        if(n == m) {
            cout << 0;
        } else {
            ll x = m/n;
            ll res = 0;
            while (x%3 == 0)
            {
                res++;
                x /=3;
            }
            while (x%2 == 0)
            {
                res++;
                x /=2;
            }
            if(x == 1){
            cout << res;} else {
                cout << -1;
            }
            
        }
    } else {
        cout << -1;
    }
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