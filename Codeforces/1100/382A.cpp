#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    string s1,s2; cin >> s1 >> s2;
    int n = s1.size();
    if((n-1 + s2.size())%2) {
      cout << "Impossible";
      return;
    }
    int pos = s1.find('|');
    deque<char> mq;
    for (int i = 0; i < n; i++)
    {
      mq.push_back(s1[i]);
    }
    int lh = s1.substr(0, pos).size(), rh = s1.substr(pos+1, n).size();
    int lp = 0, ns = s2.size();
    if(ns+lh < rh || ns+rh < lh) {
      cout << "Impossible";
      return;
    }
    while (ns)
    {
      if(lh> rh) {
        mq.push_back(s2[lp]);
        lp++;
        ns--;
        rh++;
      } else {
        mq.push_front(s2[lp]);
        lp++;
        ns--;
        lh++;
      }
    }
    for (auto x:mq)
    {
      cout << x;
    }
    
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