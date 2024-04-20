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
    ll k, res=0;; cin >> k;
    vll nums(n);
    ll totalDurability = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> nums[i];
      totalDurability+= nums[i];
    }
    if(k >= totalDurability) {
      cout << n << endl;
      return;
    }
    int lp = 0, rp = nums.size()-1, first = 1;
    if(k%2) {
      ll lk = (k-1)/2 +1, rk = (k-1)/2;
      while (lk > 0 || rk > 0)
      {
        if(lk - nums[lp] >= 0) {
          lk -= nums[lp];
          lp++;
          res++;
        }
        if(rk - nums[rp] >= 0) {
          rk -= nums[rp];
          rp--;
          res++;
        }
        if(lk - nums[lp] < 0 && rk - nums[rp] < 0) {
          break;
        }
      }
      
    } else {
      ll lk = k/2, rk = k/2;
      while (lk > 0 || rk > 0)
      {
        if(lk - nums[lp] >= 0) {
          lk -= nums[lp];
          lp++;
          res++;
        }
        if(rk - nums[rp] >= 0) {
          rk -= nums[rp];
          rp--;
          res++;
        }
        if(lk - nums[lp] < 0 && rk - nums[rp] < 0) {
          break;
        }
      }
    }
    cout << res << endl;
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