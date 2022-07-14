#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
bool vis[302][302];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	cin.ignore(1);

	int maze[302][302];
	fill(&maze[0][0], &maze[301][301], -1);

	string str;
	for (int i = 0; i < n; ++i) {
		getline(cin, str);
		for (int j = 0; j < str.size(); ++j) {
			maze[i][j] = str[j] - '0';
		}
	}

	queue<pair<int, int>> Q;
	vis[0][0] = 1;
	maze[0][0] = 1;
	Q.push({ 0,0 });

	while (!Q.empty()) {
		pair<int, int> cur = Q.front();
		Q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (vis[nx][ny] || maze[nx][ny] == 0) continue;

			vis[nx][ny] = 1;
			maze[nx][ny] = maze[cur.X][cur.Y] + 1;
			Q.push({ nx,ny });
		}
	}

	cout << maze[n - 1][m - 1];

	return 0;
}