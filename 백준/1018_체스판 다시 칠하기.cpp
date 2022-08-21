#include <bits/stdc++.h>
using namespace std;

int res = 65;
string WB[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};
string BW[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};

int n, m;
string board[52];

bool OOB(int i, int j) {
	return (i >= n || j >= m);
}

void solve() {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (OOB(i + 7, j + 7)) continue;

			int wbcnt, bwcnt;
			wbcnt = bwcnt = 0;
			for (int x = 0; x <= 7; ++x) {
				for (int y = 0; y <= 7; ++y) {
					
					if (board[i + x][j + y] != WB[x][y])
						wbcnt++;
					if (board[i + x][j + y] != BW[x][y])
						bwcnt++;
				}
			}
			res = min(res, wbcnt);
			res = min(res, bwcnt);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		cin >> board[i];

	solve();

	cout << res;

	return 0;
}