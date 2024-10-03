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
// #pragma GCC optimize ("O3")
using ll = long long;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<string> vs;

const int MAX = 1e5 + 9;
void solve() {
    int n, q; cin >> n >> q;
    vi a(n); in(a);
    int left[n];
    int right[n];
    set<int>s;
    int temp=1;
    rep(i, 0, n) {
        if(a[i] != temp){
            left[i] = temp;
            s.insert(a[i]);
            continue;
        }
        do {
            temp++;
        }
        while(s.count(temp));
        left[i] = temp;
        s.insert(a[i]);
    }
    temp=1;
    s.clear();
    repre(i, n-1, 0) {
        if(a[i] != temp){
            right[i] = temp;
            s.insert(a[i]);
            continue;
        }
        do {
            temp++;
        }
        while(s.count(temp));
        right[i] = temp;
        s.insert(a[i]);
    }
    while(q--) {
        int l, r; cin >> l >> r;
        l--,r--;
        cout << min(right[l], left[r]) << endl;
    }
}
int32_t main() {
    iifire
    freopen("mex.in","r",stdin);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
