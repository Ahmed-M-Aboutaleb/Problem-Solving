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
    ll maxii = LONG_LONG_MAX, mini = LONG_LONG_MIN;
    vll ignor;
    for (int i = 0; i < n; i++)
    {
        int a; ll x; cin >> a >> x;
        if(a == 2) {
            maxii = min(maxii, x);
        } else if (a == 1) {
            mini = max(mini, x);
        } else if(a == 3) {
            ignor.push_back(x);
        }
    }
    ll ress = (maxii >= mini) ? (maxii+1) - mini : 0;
    for (auto mm: ignor)
    {
        if(mm >= mini && mm <= maxii)
            ress--;
    }
    cout << ress << endl;
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