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
    ll zeroz = 0, oness = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        if(nums[i] == 0)
            zeroz++;
        if(nums[i] == 1)
            oness++;
    }
    cout << ((ll) pow(2, zeroz) * oness) << endl;
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