#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int h = 12;
int w = 6;
string board[12];

bool OOB(int nx, int ny) {
	return nx < 0 || ny < 0 || nx >= h || ny >= w;
}

bool BFS() {
	bool bomb = false;
	for (int c = 0; c < 5; ++c) {
		char color;
		if (c == 0) color = 'R';
		if (c == 1) color = 'G';
		if (c == 2) color = 'B';
		if (c == 3) color = 'P';
		if (c == 4) color = 'Y';

		for (int i = 0; i < h; ++i) {
			for (int j = 0; j < w; ++j) {
				if (board[i][j] == color) {
					queue<pair<int, int>> q;
					q.push({ i,j });
					board[i][j] = '*';
					int area = 1;

					while (!q.empty()) {
						auto cur = q.front();
						q.pop();
						for (int d = 0; d < 4; ++d) {
							int nx = cur.X + dx[d];
							int ny = cur.Y + dy[d];
							if (OOB(nx, ny)) continue;
							if ((board[nx][ny] != color) || (board[nx][ny] == '*')) continue;
							q.push({ nx,ny });
							area++;
							board[nx][ny] = '*';
						}
					}

					for (int r = 0; r < h; ++r) {
						for (int c = 0; c < w; ++c) {
							if (board[r][c] == '*') {
								if (area >= 4)  board[r][c] = '@';
								else board[r][c] = color;
							}
						}
					}

					if (area >= 4) bomb = true;
				}
			}
		}
	}

	return bomb;
}

void fall() {
	for (int r = 0; r < h; ++r)
		for (int c = 0; c < w; ++c)
			if (board[r][c] == '@') board[r][c] = '.';

	for (int j = 0; j < 6; ++j) {
		for (int i = 10; i >= 0; --i) {
			if (board[i][j] == '.') continue;

			int idx = 11;
			while (idx >= i) {
				if (board[idx][j] != '.')
					idx--;
				else {
					board[idx--][j] = board[i][j];
					board[i][j] = '.';
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 0; i < 12; ++i)
		cin >> board[i];

	int ans = 0;
	while (BFS()) {
		ans++;
		fall();
	}

	cout << ans;

	return 0;
}