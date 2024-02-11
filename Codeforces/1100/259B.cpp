#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    int n1,n2,n3,n4,n5,n6,n7,n8,n9;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9;
    for (int i = 1; i <= 100000; i++)
    {
        ll sum = n2+n3+i, sum2 = n4+n6, sum3= n7 + n8;
        if(sum < sum2 || sum <sum3) {
            continue;
        }
        n1 = i;
        n5 =sum - sum2;
        n9 = sum - sum3;
        ll allSum2 = n4+n5+n6, allSum3 = n7+n8+n9, allSumD1 = n1+n5+n9, allSumD2 = n3+n5+n7;
        if(sum != allSum2 || sum != allSum3 || sum != allSumD1 || sum != allSumD2 ) {
            continue;
        } else {
            break;
        }
    }
    cout << n1 << " " << n2 << " " << n3 << endl;
    cout << n4 << " " << n5 << " " << n6 << endl;
    cout << n7 << " " << n8 << " " << n9 << endl;

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