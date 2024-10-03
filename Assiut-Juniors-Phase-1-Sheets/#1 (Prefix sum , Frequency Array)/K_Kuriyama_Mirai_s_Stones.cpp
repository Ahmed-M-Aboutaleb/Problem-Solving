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
#define in(v) for(auto &x:v) cin >>x;
#define repe(i,a,b) for (int i = a; i <= b; i++)
#define rep(i,a,b) for (int i = a; i < b; i++)
#define repre(i,a,b) for (int i = a; i >= b; i--)
#define repr(i,a,b) for (int i = a; i > b; i--)
#pragma GCC optimize ("O3")
using ll = long long;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<string> vs;
void solve() {
    int n; cin >> n;
    vi a(n); in(a);
    vi p(n, 0);
    p[0] = a[0];
    rep(i, 1, n)
        p[i] = p[i-1] + a[i];
    sort(all(a));
    vi u(n,0);
    u[0] = a[0];
    rep(i, 1, n)
        u[i] = u[i-1] + a[i];
    int m; cin >> m;
    while (m--)
    {
        int l,r,t; cin >> t>>l>>r;
        if(t == 1)
            cout << p[r-1] - (l == 1 ? 0 : p[l-2]) << endl;
        else
            cout << u[r-1] - (l == 1 ? 0 : u[l-2]) << endl;
    } 

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
