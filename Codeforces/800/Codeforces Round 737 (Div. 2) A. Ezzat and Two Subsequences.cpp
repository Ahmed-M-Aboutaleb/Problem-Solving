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
    vll nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(all(nums), greater<ll>());
    double res = 0, cc = 0;
    for (int i = 1; i < n; i++)
    {
        res += nums[i];
        cc++;
    }
    res /= cc;
    res+= nums[0];
    cout << fixed << setprecision(9) << res << endl;
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