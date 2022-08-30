#include <bits/stdc++.h>
using namespace std;

int board[4][5][5][5];

	// 판번호, 회전(0~3)
pair<int,int> arr[5]; // 선택된 판.. 맨 윗장부터 
bool isUsed[5];
int maze[5][5][5];
bool visited[5][5][5];

int dx[6] = { 1,0,0,0,0,-1 };
int dy[6] = { 0,1,-1,0,0,0 };
int dz[6] = { 0,0,0,1,-1,0 };

int ans = 130;
bool escaped = false;

void rotate() {	// 시계방향으로 90도 회전
	int tmp[5][5];

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 5; ++j) {
			memcpy(tmp, board[i][j], sizeof(tmp));
			for (int r = 0; r < 5; ++r) {
				for (int c = 0; c < 5; ++c) {
					board[i + 1][j][c][4 - r] = tmp[r][c];
				}
			}
		}
	}
}

bool OOB(int x, int y, int z) {
	if (x < 0 || y < 0 || z < 0 || x >= 5 || y >= 5 || z >= 5) return true;
	return false;
}

int BFS() {
	for (int i = 0; i < 5; ++i)
		for (int j = 0; j < 5; ++j) 
			fill(visited[i][j], visited[i][j] + 5, false);
		
	queue<tuple<int, int, int>> Q;
	Q.push(make_tuple(0, 0, 0));
	visited[0][0][0] = true;

	while (!Q.empty()) {
		auto cur = Q.front();
		Q.pop();

		int cx = get<0>(cur);
		int cy = get<1>(cur);
		int cz = get<2>(cur);

		for (int d = 0; d < 6; ++d) {
			int nx = cx + dx[d];
			int ny = cy + dy[d];
			int nz = cz + dz[d];

			if (OOB(nx, ny, nz)) continue;
			if (visited[nx][ny][nz]) continue;
			if (!maze[nx][ny][nz]) continue;

			visited[nx][ny][nz] = true;
			maze[nx][ny][nz] = maze[cx][cy][cz] + 1;
			Q.push(make_tuple(nx, ny, nz));
		}
	}

	return maze[4][4][4] - 1;
}

void solve(int k) {
	if (k == 5) {
		if (board[arr[0].second][arr[0].first][0][0] == 0) return; // 입구가 막힘
		if (board[arr[4].second][arr[4].first][4][4] == 0) return; // 출구가 막힘	

		for (int i = 0; i < 5; ++i) {
			int boardNumber = arr[i].first;
			int rotNumber = arr[i].second;
			memcpy(maze[i], board[rotNumber][boardNumber], sizeof(maze[i]));
		}

		int bfs = BFS();
		if (bfs != 0) {
			escaped = true;
			ans = min(bfs, ans);
		}

		return;
	}

	for (int i = 0; i < 5; ++i) {
		if (!isUsed[i]) {
			for (int d = 0; d < 4; ++d) {
				arr[k] = { i,d };
				isUsed[i] = 1;
				solve(k + 1);
			}
			isUsed[i] = 0;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 0; i < 5; ++i)
		for (int j = 0; j < 5; ++j)
			for (int k = 0; k < 5; ++k)
				cin >> board[0][i][j][k];
	rotate();

	solve(0);

	if (!escaped) cout << -1;
	else cout << ans;

	return 0;
}