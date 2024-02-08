#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    int n, m; cin >> n >> m;
    vector<vi> nums(n);
    ll currSum = 0;
    int nigNumber = 0, zerozFrq = 0;
    int minnn = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        vi numm(m);
        for (int j = 0; j < m; j++)
        {
            cin >> numm[j];
            minnn = min(minnn, abs(numm[j]));
            currSum += abs(numm[j]);
            if(numm[j] < 0) {
                nigNumber++;
            }
        }
        nums[i] = numm;
    }
    if(nigNumber%2) {
        
        cout<< currSum - (2* minnn) << endl;
    } else {
        cout<< currSum << endl;
    }
    
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