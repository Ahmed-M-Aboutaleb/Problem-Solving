#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    string n; cin >> n;
    bool isValid = true;
    if(n.size() == 1)
        (n[0] == '4' ? isValid = 0 : 0);
    if(n[0] == '4')
        isValid = 0;
    for (int i = 0; i < n.size() && isValid; i++)
    {
        if(n[i] != '1' && n[i] != '4'){
            isValid = 0;
        }
    }
    for (int i = 0; i < n.size() -2 && n.size() != 1 && isValid; i++)
    {
        if(n[i] == '4' && n[i+1] == '4' && n[i+2] == '4'){
            isValid = 0;
        }
    }
    cout << (isValid ? "YES" : "NO") << endl;
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