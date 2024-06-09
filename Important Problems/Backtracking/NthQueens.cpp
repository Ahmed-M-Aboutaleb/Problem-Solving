#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
using namespace std;

const int MAX_SIZE = 15;
int n;

vector<vi> answers;
vi currentAnswer;

bool rows[MAX_SIZE + 1] = {0}, rightDiagonal[2 * MAX_SIZE + 1] = {0}, leftDiagonal[2 * MAX_SIZE + 1] = {0};

bool isValid(int row, int col) {
	return !rows[row] && !rightDiagonal[row + col] && !leftDiagonal[n + (row - col)];
}

void Do(int row, int col) {
	rows[row] = leftDiagonal[n + (row - col)] = rightDiagonal[row + col] = currentAnswer[n*row + col] = true;
}

void undo(int row, int col) {
	rows[row] = leftDiagonal[n + (row - col)] = rightDiagonal[row + col] = currentAnswer[n*row + col] = false;
}

void NthQueen(int col) {
	if(col == n) {
		answers.pb(currentAnswer);
		return;
	}

	for (int row = 0; row < n; row++)
		if(isValid(row, col)) {
			Do(row, col);
			NthQueen(col+1);
			undo(row, col);
		}
	
}

void printAnswer() {
	cout << "All solutions number: " << answers.size() << endl;
	for (auto answer:answers)
	{
		for (int i = 0; i < n*n; i++) {
			cout << answer[i];
			if((i+1)%n == 0 && i != 0)
				cout << endl;
		}
		cout << endl;
	}
}

void solve() {
	cin >> n;
	answers.clear();
	currentAnswer.clear();
	currentAnswer.resize(n*n);
	NthQueen(0);
	printAnswer();
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
	//cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}