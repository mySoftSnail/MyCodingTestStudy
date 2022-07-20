#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[105][105];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int r, c, k;
	cin >> r >> c >> k;

	for (int i = 0; i < k; ++i) {
		int ax, ay, bx, by;
		cin >> ax >> ay >> bx >> by;

		for (int x = ax; x < bx; ++x) {
			for (int y = ay; y < by; ++y) {
				board[y][x] = 1;
			}
		}
	}

	queue<pair<int, int>> Q;
	vector<int> V;

	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			if (board[i][j] == 0) {

				Q.push({ i,j });
				board[i][j] = 1;
				int cnt = 1;

				while (!Q.empty()) {
					auto cur = Q.front();
					Q.pop();
					
					for (int d = 0; d < 4; ++d) {
						int nx = cur.X + dx[d];
						int ny = cur.Y + dy[d];
						if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
						if (board[nx][ny] == 1) continue;
						board[nx][ny] = 1;
						Q.push({ nx,ny });
						cnt++;
					}
				}
				V.push_back(cnt);
			}
		}
	}

	sort(V.begin(), V.end());
	cout << V.size() << '\n';
	for (auto v : V)
		cout << v << ' ';
	
	return 0;
}