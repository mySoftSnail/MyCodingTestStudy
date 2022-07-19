#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[303][303];
int dx[8] = { 1,2,2,1,-1,-2,-2,-1 };
int dy[8] = { 2,1,-1,-2,-2,-1,1,2 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int l;
		cin >> l;

		for (int i = 0; i < l; ++i) {
			fill(board[i], board[i] + l, 0);
		}

		int x, y;
		cin >> x >> y;
		queue<pair<int, int>> Q;
		Q.push({ x,y });

		int tx, ty;
		cin >> tx >> ty;
		if ((x == tx) && (y == ty)) {
			cout << 0 << '\n';
			continue;
		}

		bool escape = false;
		while (!Q.empty() && !escape) {
			auto cur = Q.front();
			Q.pop();

			for (int d = 0; d < 8; ++d) {
				int nx = cur.X + dx[d];
				int ny = cur.Y + dy[d];

				if (nx < 0 || nx >= l || ny < 0 || ny >= l) continue;
				if (board[nx][ny] >= 1) continue;

				board[nx][ny] = board[cur.X][cur.Y] + 1;
				if (board[tx][ty] >= 1) {
					escape = true;
					break;
				}

				Q.push({ nx,ny });
			}
		}

		cout << board[tx][ty] << '\n';
	}

	return 0;
}