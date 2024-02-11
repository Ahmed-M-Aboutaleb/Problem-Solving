#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    int n,x;cin>> n;
    deque<int> neg, pos, zeroz;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if(x >0) {
            pos.pb(x);
        } else if(x < 0) {
            neg.pb(x);
        } else {
            zeroz.pb(x);
        }
    }
    if(pos.size() == 0) {
        pos.pb(neg[0]);
        neg.pop_front();
        pos.pb(neg[0]);
        neg.pop_front();
    }
    if(neg.size()%2 == 0) {
        zeroz.pb(neg[0]);
        neg.pop_front();
    }
    cout << neg.size() << " ";
    for (auto xx: neg)
    {
        cout << xx << " ";
    }
    cout << endl;
    cout << pos.size() << " ";
    for (auto xx: pos)
    {
        cout << xx << " ";
    }
    cout << endl;
    cout << zeroz.size() << " ";
    for (auto xx: zeroz)
    {
        cout << xx << " ";
    }
    cout << endl;
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