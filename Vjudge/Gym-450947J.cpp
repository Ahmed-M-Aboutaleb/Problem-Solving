#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    ll n; cin >> n;
    bitset<64> ms(n);
    vi lp(64), rp(64);
    string nn = ms.to_string();
    lp[0] = 0;
    rp[nn.size() -1] = nn[nn.size() - 1] - '0';
    for (int i = 1; i < nn.size(); i++)
    {
        lp[i] += lp[i-1] + (nn[i] - '0');
    }
    for (int i = nn.size() - 2; i >= 0; i--)
    {
        rp[i] += rp[i+1] + (nn[i] - '0');
    }
    for (int i = 0; i < lp.size(); i++)
    {
        if(lp[i] == rp[i]) {
            ms.set(i, 1);
        } else {
            ms.set(i, 0);
        }
    }
    nn = ms.to_string();
    reverse(all(nn));
    bitset<64> msss(nn);
    cout << msss.to_ullong() << endl;
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