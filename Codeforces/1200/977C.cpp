#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    int n, k; cin >> n >> k;
    vll nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    if(k == 0) {
        ll mm = *min_element(all(nums));
        if(mm == 1) {
            cout << -1;
        } else {
            cout << mm-1;
        }
        return;
    }
    sort(all(nums));
    if(k < n && nums[k-1] == nums[k]) {
        cout << "-1";
    } else {
        if(nums[k-1] <= 1000000000){
            cout << nums[k-1];
        } else {
            cout << -1;
        }
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