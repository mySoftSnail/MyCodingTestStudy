#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[502][502];
bool vis[502][502];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> board[i][j];
		}
	}

	int paint = 0;
	int maxwidth = 0;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {

			if (board[i][j]) {
				if (vis[i][j]) continue;

				//cout << "visit: (" << i << "," << j << ")\n";

				queue<pair<int, int>> Q;
				vis[i][j] = 1;
				Q.push({ i,j });

				int width = 1;

				while (!Q.empty()) {
					pair<int, int> cur = Q.front();
					Q.pop();
					//cout << '(' << cur.X << ", " << cur.Y << ") ->";
					for (int dir = 0; dir < 4; dir++) {
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir];
						if (nx < 0 || nx >= n || nx < 0 || ny >= m) continue;
						if (vis[nx][ny] || board[nx][ny] != 1) continue;
						vis[nx][ny] = 1;
						width++;
						Q.push({ nx,ny });
					}
				}
				//cout << '\n';

				if (width) paint++;
				maxwidth = maxwidth < width ? width : maxwidth;
			}

		}
	}

	cout << paint << '\n' << maxwidth;

	return 0;
}