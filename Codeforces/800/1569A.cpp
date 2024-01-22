#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    int n, l = -2, r = -2; cin >> n;
    string s; cin >> s;
    for (int i = 0; i < n-1; i++)
    {
        int aa = 0, bb = 0;
        if(s[i] == 'a') {
            aa++;
        } else {
            bb++;
        }
        for (int j = i+1; j < n; j++)
        {
            if(s[j] == 'a') {
                aa++;
            } else {
                bb++;
            }
            if(aa == bb) {
                l = i;
                r = j;
                goto resss;
            }
        }
        
    }
    resss:
        cout << l+1 << " " << r+1 << endl;
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