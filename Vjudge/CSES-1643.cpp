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
    vll pre(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pre[i];
    }

    ll maxSum = pre[0];
    ll currSum = pre[0];
    
    for (int i = 1; i < n; i++) {
        currSum = max(pre[i], currSum + pre[i]);
        maxSum = max(maxSum, currSum);
    }
    
    cout << maxSum << endl;
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
