#include <bits/stdc++.h>
using namespace std;

char board[2300][2300];

void func(int n, int r, int c) {
	if (n == 1) {
		board[r][c] = '*';
		return;
	}
	
	int d3 = n / 3;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			if (i == 1 && j == 1) continue;
			func(d3, r + i * d3, c + j * d3);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		fill(board[i], board[i] + n, ' ');
	}

	func(n, 0, 0);

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << board[i][j];
		}
		cout << '\n';
	}

	return 0;
}
