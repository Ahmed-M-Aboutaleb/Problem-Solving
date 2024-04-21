#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;

bool isValid(vector<string> &grid, int i, int j) {
  int c = 1, ROWS = grid.size(), COLS = grid[0].size();
  if(i - 1 >= 0 && grid[i-1][j] == grid[i][j]) {
    if((j+1 < COLS && grid[i][j+1] == grid[i][j]) || (j+1 < COLS && grid[i-1][j+1] == grid[i][j]))
      return true;
    if((j-1 >= 0 && grid[i][j-1] == grid[i][j]) || (j-1 >=0 && grid[i-1][j-1] == grid[i][j]))
      return true;
  }
  if(i + 1 < ROWS && grid[i+1][j] == grid[i][j]) {
    if((j+1 < COLS && grid[i][j+1] == grid[i][j]) || (j+1 < COLS && grid[i+1][j+1] == grid[i][j]))
      return true;
    if((j-1 >= 0 && grid[i][j-1] == grid[i][j]) || (j-1 >=0 && grid[i+1][j-1] == grid[i][j]))
      return true;
  }
  if (j - 1 >= 0 && grid[i][j-1] == grid[i][j]) {
    if((i+1 < ROWS && grid[i+1][j] == grid[i][j]) || (i+1 < ROWS && grid[i+1][j-1] == grid[i][j]))
      return true;
    if((i-1 >= 0 && grid[i-1][j] == grid[i][j]) || (i-1 >= 0 && grid[i-1][j-1] == grid[i][j]))
      return true;
  }
  if (j + 1 < COLS && grid[i][j+1] == grid[i][j]) {
    if((i+1 < ROWS && grid[i+1][j] == grid[i][j]) || (i+1 < ROWS && grid[i+1][j+1] == grid[i][j]))
      return true;
    if((i-1 >= 0 && grid[i-1][j] == grid[i][j]) || (i-1 >= 0 && grid[i-1][j+1] == grid[i][j]))
      return true;
  }
  
  return false;
}

void solve() {
    vector<string> grid(4);
    bool hasAns = false;
    for (int i = 0; i < 4; i++)
    {
      cin >> grid[i];
    }
    for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        if(isValid(grid, i, j)) {
          hasAns = 1;
          break;
        }
      }
      
    }
    cout << (hasAns ? "YES" : "NO");
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