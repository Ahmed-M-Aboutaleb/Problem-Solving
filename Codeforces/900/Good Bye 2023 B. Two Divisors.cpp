#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    ll a, b; cin >>a >> b;
    if(b%a == 0) {
        cout << b * (b/a) << endl;
        return;
    } else {
        cout << b * (a/__gcd(a,b)) << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}