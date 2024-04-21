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
    int z = 0;
    for (int i = 0; i < n; i++)
    {
        int l, r; cin >> l >> r;
        z+= (r+1)-l;
    }
    cout << ((z%k) == 0 ? 0 : k-(z%k));
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