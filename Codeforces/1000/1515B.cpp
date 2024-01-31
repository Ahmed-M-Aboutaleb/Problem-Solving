#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;

bool isSquare(int x){
    int y=sqrt(x);
    return y*y==x;
}

void solve() {
    ll n; cin >> n;
    
    bool isValid = (n % 2 == 0 && isSquare(n/2)) || ((n % 4 == 0 && isSquare(n/4)));
    cout << (isValid ? "YES" : "NO") << endl;
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