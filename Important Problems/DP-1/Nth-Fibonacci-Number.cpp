#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;

const int MAX_SIZE = 1e4 + 4;

ll dp[MAX_SIZE] = {0};

int fib(int n) {
	if(dp[n])
		return dp[n];
	dp[n] = fib(n-1) + fib(n-2);
	return dp[n];
}

int fibIterative(int n) {
	for (int i = 2; i <= n; i++)
	{
		dp[i] = dp[i-1] + dp[i-2];
	}
	return dp[n];
}

void solve() {
	int n; cin >> n;
	dp[1] = dp[2] = 1;
	cout << fib(n);
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