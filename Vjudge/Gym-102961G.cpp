#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    ll n, x; cin >> n >> x; 
    vll nums(n);
    vector<pair<ll, int>> indexedNums;
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
        indexedNums.pb({nums[i], i + 1});
    }
    sort(all(indexedNums));
    int left = 0, right = n - 1;
    while (left < right) {
        ll sum = indexedNums[left].first + indexedNums[right].first;
        if (sum == x) {
            cout << indexedNums[left].second << " " << indexedNums[right].second << endl;
            return;
        } else if (sum < x) {
            ++left;
        } else {
            --right;
        }
    }
    cout << "IMPOSSIBLE";
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