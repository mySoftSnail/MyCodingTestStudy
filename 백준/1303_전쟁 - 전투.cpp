#include <bits/stdc++.h>
using namespace std;

int n, m;
string board[102];
#define X first
#define Y second
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> m >> n;
	for (int i = 0; i < n; ++i)
		cin >> board[i];

	int wSum = 0, bSum = 0;
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {

			if (board[i][j] != '.') {
				char c = board[i][j];
				int area = 1;
				board[i][j] = '.';
				queue<pair<int, int>> q;
				q.push({ i,j });

				while (!q.empty()) {
					auto cur = q.front();
					q.pop();

					for (int d = 0; d < 4; ++d) {
						int nx = cur.X + dx[d];
						int ny = cur.Y + dy[d];

						if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
						if (board[nx][ny] == '.') continue;
						if (board[nx][ny] != c) continue;

						board[nx][ny] = '.';
						q.push({ nx,ny });
						area++;
					}
				}

				if (c == 'W') wSum += area * area;
				if (c == 'B') bSum += area * area;
			}
		}
	}

	cout << wSum << ' ' << bSum;
}

