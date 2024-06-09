#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;

int n;

vector<string> paths;
string currentPath;
int rows[] = {1, -1, 0, 0};
int cols[] = {0, 0, 1, -1};
char moves[] = {'D', 'U', 'R', 'L'};

bool isValid(vector<vi> &grid, int row, int col) {
	return row >= 0 && col >= 0 && row < n && col < n && grid[row][col];
}

void Do(char move) {
	currentPath.pb(move);
}

void undo() {
	currentPath.pop_back();
}

void solveMaze(vector<vi> &grid, int row, int col) {
	if(!isValid(grid, row, col))
		return;
	if(row == n-1 && col == n-1) {
		paths.pb(currentPath);
		return;
	}
	grid[row][col] = 0;
	for (int i = 0; i < 4; i++)
	{
		int newRow = row + rows[i], newCol = col + cols[i];
		if(isValid(grid, newRow, newCol)) {
			Do(moves[i]);
			solveMaze(grid, newRow, newCol);
			undo();
		}
	}
	grid[row][col] = 1;
}

void printAnswer() {
    for(auto path:paths) {
		cout << path << " ";
	}
	cout << endl;
}

void solve() {
	cin >> n;
	vector<vi> grid(n, vector<int>(n));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> grid[i][j];
	paths.clear();
	currentPath = "";
	solveMaze(grid, 0, 0);
	printAnswer();
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