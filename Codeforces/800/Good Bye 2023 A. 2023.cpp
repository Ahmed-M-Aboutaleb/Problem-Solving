#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    set<ll> ms = {1,7,17,119, 289, 2023};
    int n, k; cin >> n >> k;
    ll prod = 1, x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        prod *= x;
    }
    bool res = ms.count(prod);
    cout << (res? "Yes" : "NO") << endl;
    if(res) {
        cout << 2023/prod << " ";
        for (int i = 1; i < k; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
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