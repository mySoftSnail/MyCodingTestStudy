#include <bits/stdc++.h>
using namespace std;

int board[2200][2200];

int cnt[3];

bool check(int n, int r, int c) {
	bool same = true;
	for (int i = r; i < r + n; ++i) {
		for (int j = c; j < c + n; ++j) {
			if (board[i][j] != board[r][c]) same = false;
		}
	}

	if (same) {
		switch (board[r][c]) {
		case -1:
			cnt[0]++;
			break;
		case 0:
			cnt[1]++;
			break;
		case 1:
			cnt[2]++;
			break;
		}
	}

	return same;
}

void func(int n, int r, int c) {
	if (check(n, r, c)) return;

	int d3 = n / 3;

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
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
		for (int j = 0; j < n; ++j) {
			cin >> board[i][j];
		}
	}

	func(n, 0, 0);

	cout << cnt[0] << '\n' << cnt[1] << '\n' << cnt[2];

	return 0;
}