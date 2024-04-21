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
  vi nums(n);
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }
  int maxi = 0;
  if(n == 1){
    cout <<1;
    return;
  }
  for (int i = 0; i < n; i++)
  {
    int mid = nums[i], l = i, r= i;
    while (r < n && mid >= nums[r])
    {
      mid = nums[r];
      r++;
    }
    mid = nums[i];
    while (l >= 0 && mid >= nums[l])
    {
      mid = nums[l];
      l--;
    }
    l++;
    r--;
    maxi = max(maxi, r - l +1);
  }
  cout << maxi;
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