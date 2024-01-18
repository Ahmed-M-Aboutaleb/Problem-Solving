#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;

void solve() {
    int n,k; cin >> n >> k;
    vi nums(n);
    for(int i =0; i< n; i++)
        cin >> nums[i];
    bool isValid = (nums[k-1] == nums[n-1]);
    int oppp = -1;
    for (int i = k-1; i < n-1; i++)
    {
        if(nums[i] != nums[i+1]){
            isValid = false;
            break;
        }
    }
    if(isValid)
        for (int i = 0; i < n; i++)
        {
            if(nums[i] != nums[n-1]){
                oppp = i;
            }
        }
    cout << (isValid ? (oppp == -1 ? 0 : oppp+1) : -1);
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