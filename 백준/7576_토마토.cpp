#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int box[1005][1005];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int m, n;
	cin >> m >> n;

	for (int i = 0; i < 1004; ++i) {
		fill(box[i], box[i] + 1004, -1);
	}

	queue<pair<int, int>> q;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> box[i][j];
			if (box[i][j] == 1) {
				q.push({ i,j });
			}
		}
	}

	while (!q.empty()) {
		pair<int, int> cur = q.front();
		q.pop();
		for (int dir = 0; dir < 4; ++dir) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (box[nx][ny] == -1) continue; // -1이면 토마토가 아님
			if (box[nx][ny] >= 1) continue;	 // 이미 방문함	

			box[nx][ny] = box[cur.X][cur.Y] + 1;
			q.push({ nx,ny });
		}
	}

	int max = 1;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (box[i][j] == 0) {
				cout << -1;
				return 0;
			}
			if (max < box[i][j]) max = box[i][j];
		}
	}

	cout << max - 1;
	return 0;
}
