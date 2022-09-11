#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int N, M;
int board[10][10];
int origin[10][10];
vector<pair<int, int>> empt;
vector<bool> isUsed;
queue<pair<int, int>> virus;
int ans = 0;

bool OOB(int r, int c) {
	return (r < 0 || c < 0 || r >= N || c >= M);
}

int bfs() {
	memcpy(board, origin, sizeof(board));

	for (int i = 0; i < empt.size(); ++i) {
		if (isUsed[i]) 
			board[empt[i].X][empt[i].Y] = 1;
	}

	queue<pair<int, int>> v;
	v = virus;
	while (!v.empty()) {
		auto cur = v.front();
		v.pop();
		
		for (int d = 0; d < 4; ++d) {
			int nx = cur.X + dx[d];
			int ny = cur.Y + dy[d];

			if ((board[nx][ny] != 0) || OOB(nx, ny)) continue;

			board[nx][ny] = 2;
			v.push({ nx,ny });
		}
	}

	int safeArea = 0;
	for (int i = 0; i < N; ++i) 
		for (int j = 0; j < M; ++j) 
			safeArea += (board[i][j] == 0);

	return safeArea;
}

void solve(int k) {
	if (k == 3) {
		ans = max(ans, bfs());
		return;
	}

	for (int i = 0; i < empt.size(); ++i) {
		if (!isUsed[i]) {
			isUsed[i] = true;
			solve(k + 1);
			isUsed[i] = false;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			cin >> board[i][j];
			origin[i][j] = board[i][j];
			if (board[i][j] == 0)
				empt.push_back({ i,j });
			if (board[i][j] == 2)
				virus.push({ i,j });
		}
	}

	isUsed.resize(empt.size(), false);

	solve(0);

	cout << ans;

	return 0;
}