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
    vector<string> map;
    vi towsI;
    string s;cin >> s;
    int frqOne = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1'){ frqOne++; } else{ towsI.pb(i);}
    }
    if((n - frqOne) == 1 ||(n - frqOne) == 2) {
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        string curR = "";
        for (int j = 0; j < n; j++)
        {
            if(i == j) {
                curR+= 'X';
            } else {
                curR+= '=';
            }
        }
        map.pb(curR);
    }
    for (int i = 0; !towsI.empty() && i < towsI.size(); i++)
    {
        if(i == towsI.size() -1) {
            map[towsI[i]][towsI[0]] = '+';
            map[towsI[0]][towsI[i]] = '-';
            continue;
        }
        map[towsI[i]][towsI[i+1]] = '+';
        map[towsI[i+1]][towsI[i]] = '-';
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << map[i] << endl;
    }
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