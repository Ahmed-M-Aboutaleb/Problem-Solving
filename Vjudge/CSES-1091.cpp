#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    int n,m; cin >> n >> m;
    vll customers(m);
    multiset<ll> tickets;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        tickets.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> customers[i];
    }
    for (int i = 0; i < m; i++)
    {
        auto it = tickets.upper_bound(customers[i]);
        if(it != tickets.begin()) {
            --it;
            cout << *it << endl;
            tickets.erase(it);
        } else {
            cout << -1 << endl;
        }
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