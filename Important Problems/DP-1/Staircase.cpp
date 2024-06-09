#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>

using namespace std;

const int MAX_SIZE = 1e4 + 4;
const int MOD = 1e9+7;

ll dp[MAX_SIZE] = {0};

int staircase(int n) {
	for(int i = n-1; i >= 0; i--) {
        dp[i] = (dp[i+1] + dp[i+2] + dp[i+3])%MOD;
    }
    return dp[0];
}

void solve() {
	int n; cin >> n;
	dp[n] = 1;
	cout << staircase(n) << endl;
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