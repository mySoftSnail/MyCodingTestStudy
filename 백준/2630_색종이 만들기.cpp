#include <bits/stdc++.h>
using namespace std;

int paper[130][130];
int one = 0;
int zero = 0;

bool check(int r, int c, int n) {
	bool same = true;
	for (int i = r; i < r + n; ++i) {
		for (int j = c; j < c + n; ++j) {
			if (paper[r][c] != paper[i][j]) {
				same = false;
				break;
			}
		}
		if (!same) break;
	}

	if (same) {
		if (paper[r][c] == 1) one++;
		if (paper[r][c] == 0) zero++;
		return true;
	}
	return false;
}

void func(int r, int c, int n) {
	if (check(r, c, n)) return;

	int d2 = n / 2;

	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) {
			func(r + i * d2, c + j * d2, d2);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			cin >> paper[i][j];

	func(0, 0, n);

	cout << zero << '\n' << one;

	return 0;
}