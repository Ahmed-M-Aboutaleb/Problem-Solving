#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    int n, k; cin >> n >> k;
    if(n < k) {
        cout << k -n << endl;
        return;
    }
    if((n%2 && k%2) || (n%2 == 0 && k%2 == 0)) {
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
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