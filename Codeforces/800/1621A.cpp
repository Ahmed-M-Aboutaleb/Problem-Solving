#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    ll n, k; cin >> n >> k;
    if (n == k && n == 1)
    {
        cout << 'R' << endl;
        return;
    } 
    if(k * 2 -1 > n) {
        cout << -1 << endl;
        return;
    }
    vector<string> board;
    for (int i = 0; i < n; i++){
        string row = "";
        for (int j = 0; j < n; j++)
        {
            row += '.';
        }
        board.pb(row);
    }
    int j = 0;
    for (int i = 0; i < n && k > 0; i+=2)
    {
        board[i][j] = 'R';
        j+=2;
        k--;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
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