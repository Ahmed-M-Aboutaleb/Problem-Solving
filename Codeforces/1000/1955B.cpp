#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    ll n,c,d; cin >> n >> c >> d;
    ll x;
    set<ll> ms;
    map<ll, ll> counter;
    for (int i = 0; i < n*n; i++)
    {
      cin >> x;
      ms.insert(x);
      counter[x]++;
    }
    int j = 0;
    ll nnode = *min_element(all(ms));
    for (int i = 0; i < n; i++)
    {
      ll currR = nnode + (c*i);
      while (j < n)
      {
        if(counter[currR] == 0) {
          cout << "NO" << endl;
          return;
        }
        counter[currR]--;
        currR += d;
        j++;
      }
      j = 0;
    }
    cout << "YES" << endl;
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