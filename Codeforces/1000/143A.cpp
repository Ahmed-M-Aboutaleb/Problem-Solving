#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve() {
    int r1,r2,c1,c2,d1,d2; cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    bool isS = false;
    for (int g1 = 1; g1 < 10; g1++)
    {
      set<int> ms;
      int g2 = r1-g1,g3= d2-g2,g4= d1-g1;
      ms.insert(g1);
      if(ms.count(g2)>0)
        continue;
      ms.insert(g2);
      if(ms.count(g3)>0)
      continue;
      ms.insert(g3);
      if(ms.count(g4)>0)
      continue;
      ms.insert(g4);
      if(g2 >= 10 || g3 >= 10 || g4>= 10 || g2 <= 0 || g3 <= 0 || g4 <= 0)
        continue;
      if(g1+g4 == d1 && g2+g3 == d2 && g1+g2 == r1 && g3+g4 == r2 && g1+g3 == c1 && g2+g4 == c2) {
        r1 = g1;
        r2 = g2;
        c1 = g3;
        c2 = g4;
        isS = 1;
        break;
      }
    }
    if(isS){
      cout << r1 << " " << r2 << endl << c1 << " "<< c2;
    } else {
      cout << -1;
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