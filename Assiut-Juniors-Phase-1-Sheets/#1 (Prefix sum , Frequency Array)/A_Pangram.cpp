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
    string s; cin >> s;
    map<char, int> f;
    for(char x:s)
        x -= (x >= 'a' and x <= 'z') ? 32 : 0, f[x]++;
    cout << (sz(f) == 26 ? "YES" : "NO");
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