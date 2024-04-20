#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    string x; cin >> x;
    if(x.size() < 3) {
      cout << x;
      return;
    }
    int i = 0;
    while (i < x.size()-1)
    {
      if(x[i] == 'W' && x[i+1] == 'U' && x[i+2] == 'B') {
        x.erase(i, 3);
        if(i > 0 && x[i-1] != ' ')
          x.insert(i, " ");
        int z = x.size();
        continue;
      }
      i++;
    }
    if(x[0] == ' ')
      x.erase(0, 1);
    cout << x;
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