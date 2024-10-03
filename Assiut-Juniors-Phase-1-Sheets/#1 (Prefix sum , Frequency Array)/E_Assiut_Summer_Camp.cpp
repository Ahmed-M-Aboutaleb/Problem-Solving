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
map<int, string> f = {
    {0, "Hussien"},
    {1, "Atef"},
    {2, "Karemo"},
    {3, "Ezzat"}
};
void solve() {
    vi nu(4);
    int fI = -1, sI = -1, fV = 0, sV = 0;
    rep(i, 0,4) {
        cin >> nu[i];
        if(nu[i] > fV) {
            sV = fV;
            sI = fI;
            fV = nu[i];
            fI = i;
        } else if(nu[i] > sV) {
            sV = nu[i];
            sI = i;
        }
    }
    cout << f[fI] << ' ' << f[sI] << endl;
}
int32_t main() {
    iifire
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
