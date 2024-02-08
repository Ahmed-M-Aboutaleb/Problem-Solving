#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
map<string, ll> db;
void solve() {
    string x; cin >> x;
    if(db[x] == 0) {
        cout << "OK" << endl;
        db[x] = 1;
    } else {
        cout << x << db[x] << endl;
        db[x]++;
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