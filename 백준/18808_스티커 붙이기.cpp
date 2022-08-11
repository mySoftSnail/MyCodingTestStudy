#include <bits/stdc++.h>
using namespace std;

int n, m, k;
int note[42][42];
int r, c;
int stk[12][12];

void rotate() {
	int tmp[12][12];

	memcpy(tmp, stk, sizeof(stk));

	for (int i = 0; i < c; ++i)
		for (int j = 0; j < r; ++j)
			stk[i][j] = tmp[r - 1 - j][i];

	swap(r, c);
}

bool pastable(int x, int y) {
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			if ((note[x + i][y + j] == 1) && (stk[i][j] == 1)) 
				return false;
		}
	}

	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			if (stk[i][j] == 1) 
				note[x + i][y + j] = 1;
		}
	}
	return true;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> n >> m >> k;

	while (k--) {
		cin >> r >> c;
		for (int i = 0; i < r; ++i)
			for (int j = 0; j < c; ++j)
				cin >> stk[i][j];

		bool isPasted = false;
		for (int rot = 0; rot < 4; ++rot) {
			for (int x = 0; x <= n - r; ++x) {
				if (isPasted) break;

				for (int y = 0; y <= m - c; ++y) {
					if (pastable(x, y)) {
						isPasted = true;
						break;
					} 
				}

			}
			if (isPasted) break;
			rotate();
		}
	}

	int cnt = 0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cnt += note[i][j];
	cout << cnt;

	return 0;
}