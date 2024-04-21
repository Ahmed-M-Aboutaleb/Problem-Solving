#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;

bool isValid(vi nums) {
  for(int i = 0; i < nums.size()-1; i++)
  {
    if(nums[i] == nums[i+1]) {
      return false;
    }
  }
  return true;
}

void solve() {
    int n; cin >> n;
    vi nums(n);
    if(n == 1) {
      cout << "YES";
      return;
    } else if(n == 2) {
      cout << (nums[0] == nums[1] ? "NO" : "YES");
      return;
    }
    for (int i = 0; i < n; i++)
    {
      cin >> nums[i];
    }
    for (int i = 1; i < n; i++)
    {
      int j = i+1;
      while(nums[i] == nums[i-1] && j < n){
        swap(nums[i], nums[j]);
        j++;
      }
    }
    if(!isValid(nums))
      for (int i = n-2; i >= 0; i--)
      {
        int j = i-1;
        while(nums[i] == nums[i+1] && j > 0){
          swap(nums[i], nums[j]);
          j--;
        }
      }
    cout << (isValid(nums) ? "YES":"NO");
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