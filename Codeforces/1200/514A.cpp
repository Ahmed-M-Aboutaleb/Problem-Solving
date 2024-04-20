#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    string n; cin >> n;
    for (int i = 0; i < n.size(); i++)
    {
      if(n[0] == '9' && i == 0)
        continue;
      if(n[i] >= '5') {
        n[i] = (9 - (n[i] -'0')) + '0';
      }
    }
    cout << n;
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