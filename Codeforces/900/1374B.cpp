#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    ll n; cin >> n;
    if(n == 1){
        cout << 0 << endl;
        return;
    }

    if(n%3 == 0) {
        ll ops = 0;
        while (n != 1 && (n%6 == 0 || n%3 == 0))
        {
            while (n % 6 == 0)
            {
                n/=6;
                ops++;
            }
            if(n!=1){
                n*=2;
                ops++;
            }
        }
        cout << (n == 1 ? ops : -1) << endl;
        return;
    }
    cout << -1 << endl;
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