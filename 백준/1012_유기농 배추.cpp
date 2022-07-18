#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int board[60][60];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {

		int m, n, k;
		cin >> m >> n >> k;

		for (int i = 0; i < m; ++i) {
			fill(board[i], board[i] + n, 0);
		}

		for (int i = 0; i < k; ++i) {
			int x, y;
			cin >> x >> y;
			board[x][y] = 1;
		}

		int cnt = 0;
		for (int i = 0; i < m; ++i) {
			for (int j = 0; j < n; ++j) {
				if (board[i][j] == 1) {
					cnt++;
					queue<pair<int, int>> Q;
					Q.push({ i,j });

					while (!Q.empty()) {
						auto cur = Q.front();
						Q.pop();

						for (int d = 0; d < 4; ++d) {
							int nx = cur.X + dx[d];
							int ny = cur.Y + dy[d];

							if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
							if (board[nx][ny] == 0) continue;
							if (board[nx][ny] == 2) continue;

							board[nx][ny] = 2;
							Q.push({ nx,ny });
						}
					}

				}
			}
		}

		cout << cnt << '\n';
	}

	return 0;
}