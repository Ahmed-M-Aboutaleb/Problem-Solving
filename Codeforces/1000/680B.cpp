#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    int n, a; cin >> n >> a;
    vi nums(n+1);
    for (int i = 1; i <= n; i++)
    {
      cin >> nums[i];
    }
    int res = 0;
    int l = a, r= a;
    while (l > 0 && r <= n)
    {
      if(nums[l] && nums[r]) {
        if(l == r) {
          res++;
        } else {
          res += 2;
        }
      }
        
      l--;
      r++;
    }
    while (l > 0)
    {
      if(nums[l])
        res++;
      l--;
    }
    while (r <= n)
    {
      if(nums[r])
        res++;
      r++;
    }
    cout << res;
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