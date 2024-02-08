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
    ll k; cin >> k;
    vll apartment(m), applicant(n);
    for (int i = 0; i < n; i++)
    {
        cin >> applicant[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> apartment[i];
    }

    sort(all(apartment));
    sort(all(applicant));
    ll count = 0;
    ll applicant_ptr = 0;
    ll apartment_ptr = 0;
    while (applicant_ptr < n && apartment_ptr < m) {
        ll desired_size = applicant[applicant_ptr];
        ll apartment_size = apartment[apartment_ptr];

        if (abs(desired_size - apartment_size) <= k) {
            ++count;
            ++applicant_ptr;
            ++apartment_ptr;
        } else if (apartment_size < desired_size - k) {
            ++apartment_ptr;
        } else {
            ++applicant_ptr;
        }
    }
    cout << count << endl;
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