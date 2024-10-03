#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define iifire ios_base::sync_with_stdio(0);cin.tie(0);
#define fio(name) freopen(name ".in","r",stdin);freopen(name ".out","w",stdout)
#define int ll
#define endl '\n'
#define pb push_back
#define sz(x) (int) (x).size()
#define all(v) v.begin(), v.end()
#define in(v) for(auto &x:v) cin >>x.first >> x.second;
#define repe(i,a,b) for (int i = a; i <= b; i++)
#define rep(i,a,b) for (int i = a; i < b; i++)
#define repre(i,a,b) for (int i = a; i >= b; i--)
#define repr(i,a,b) for (int i = a; i > b; i--)
// #pragma GCC optimize ("O3")
using ll = long long;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<string> vs;

void mergeOverlap(vector<pi> &a) {
    sort(all(a));
    int n = sz(a), resIdx = 0;
    rep(i, 1, n) {
        if (a[resIdx].second >= a[i].first)
            a[resIdx].second = max(a[resIdx].second, a[i].second);
        else
            resIdx++, a[resIdx] = a[i];
    }
    a.resize(resIdx+1);
}

void solve() {
    int n; cin >> n;
    vector<pi> inv(n);in(inv);
    mergeOverlap(inv);
    for(auto x:inv)
        cout << x.first << ' ' << x.second << endl;
}
int32_t main() {
    iifire
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
