#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int n, m;
string board[52];
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
		cin >> board[i];

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			queue<pair<int, int>> q;
			if (board[i][j] == '-' || board[i][j] == '|') {
				ans++;
				q.push({ i,j });
				int a = board[i][j] == '|' ? 2 : 0;
				board[i][j] = '.';

				while (!q.empty()) {
					auto cur = q.front();
					q.pop();
					int nx, ny;				
					for (int d = 0; d < 2; ++d) {
						nx = cur.X + dx[d + a];
						ny = cur.Y + dy[d + a];

						if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
						if (board[nx][ny] == '.') continue;
						if (a == 2 && board[nx][ny] == '-') continue;
						if (a == 0 && board[nx][ny] == '|') continue;

						board[nx][ny] = '.';
						q.push({ nx,ny });
					}
				}
			}
		}
	}

	cout << ans;

}

