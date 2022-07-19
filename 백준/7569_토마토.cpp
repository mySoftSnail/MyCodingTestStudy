#include <bits/stdc++.h>
using namespace std;

// ∏ÈZ «‡X ø≠Y

#define Z(a) get<0>(a)
#define X(a) get<1>(a)
#define Y(a) get<2>(a)

int box[105][105][105];
int dx[6] = { -1,0,1,0,0,0 };
int dy[6] = { 0,1,0,-1,0,0 };
int dz[6] = { 0,0,0,0,1,-1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	queue<tuple<int, int, int>> Q;
	int c, r, h;
	cin >> c >> r >> h;

	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < r; ++j) {
			for (int k = 0; k < c; ++k) {
				cin >> box[i][j][k];
				if (box[i][j][k] == 1) {
					Q.push(make_tuple(i, j, k));
				}
			}
		}
	}

	while (!Q.empty()) {
		tuple<int, int, int> cur = Q.front();
		Q.pop();

		for (int d = 0; d < 6; ++d) {
			int nx = X(cur) + dx[d];
			int ny = Y(cur) + dy[d];
			int nz = Z(cur) + dz[d];

			if (nx < 0 || nx >= r || ny < 0 || ny >= c || nz < 0 || nz >= h) continue;
			if (box[nz][nx][ny] == -1) continue;
			if (box[nz][nx][ny] >= 1) continue;

			box[nz][nx][ny] = box[Z(cur)][X(cur)][Y(cur)] + 1;
			Q.push(make_tuple(nz, nx, ny));
		}
	}

	int max = 1;
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < r; ++j) {
			for (int k = 0; k < c; ++k) {
				if (box[i][j][k] == 0) {
					cout << -1;
					return 0;
				}
				if (max < box[i][j][k]) max = box[i][j][k];
			}
		}
	}

	cout << max - 1;

	return 0;
}