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
    map<pair<int, int>, int> cnt;
    for (int i = 0; i < n; i++)
    {
        int x,y; cin >> x >> y;
        cnt[{x,y}]++;
    }
    cout << (*max_element(all(cnt), [] (const pair<pair<int, int>, int> & p1, const pair<pair<int, int>, int> & p2) {
        return p1.second < p2.second;
    })).second;
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