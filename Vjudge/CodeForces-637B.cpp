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
    stack<string> ms;
    string s;
    set<string> cache;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        ms.push(s);
    }
    while (!ms.empty())
    {
        if(cache.count(ms.top()) == 0) {
            cout << ms.top() << endl;
            cache.insert(ms.top());
        }
        ms.pop();
    }
    
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