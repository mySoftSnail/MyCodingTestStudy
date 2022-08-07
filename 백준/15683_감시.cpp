#include <bits/stdc++.h>
using namespace std;

struct cctv {
	int type, r, c;
};

enum class direction {
	up, down, right, left
};

int board[10][10];
bool isWatched[10][10];
cctv cctvs[10];
int n, m;
int c = 0;
int minarea = 100;

void draw(int r, int c, direction d) {
	int dr, dc;
	dr = dc = 0;
	switch (d)
	{
	case direction::up:
		dr = -1;
		dc = 0;
		break;
	case direction::down:
		dr = 1;
		dc = 0;
		break;
	case direction::right:
		dr = 0;
		dc = 1;
		break;
	case direction::left:
		dr = 0;
		dc = -1;
		break;
	}

	int nr, nc;
	nr = r;
	nc = c;

	while (true) {
		nr += dr;
		nc += dc;
		if ((board[nr][nc] == 6) || (nr < 0) || (nr >= n) || (nc < 0) || (nc >= m)) break;
		isWatched[nr][nc] = 1;
	}
}

void solve(int k) {
	if (k == c) {
		int area = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (board[i][j] >= 1) isWatched[i][j] = 1;
				if (isWatched[i][j] == 0) area++;
			}
		}
		minarea = min(minarea, area);
		return;
	}

	cctv cam = cctvs[k];

	bool tmpWatched[10][10];
	if (cam.type == 1) {

		memcpy(tmpWatched, isWatched, sizeof(isWatched));
		draw(cam.r, cam.c, direction::up);
		solve(k + 1);
		memcpy(isWatched, tmpWatched, sizeof(tmpWatched));

		memcpy(tmpWatched, isWatched, sizeof(isWatched));
		draw(cam.r, cam.c, direction::down);
		solve(k + 1);
		memcpy(isWatched, tmpWatched, sizeof(tmpWatched));

		memcpy(tmpWatched, isWatched, sizeof(isWatched));
		draw(cam.r, cam.c, direction::right);
		solve(k + 1);
		memcpy(isWatched, tmpWatched, sizeof(tmpWatched));

		memcpy(tmpWatched, isWatched, sizeof(isWatched));
		draw(cam.r, cam.c, direction::left);
		solve(k + 1);
		memcpy(isWatched, tmpWatched, sizeof(tmpWatched));
	}
	if (cam.type == 2) {
		memcpy(tmpWatched, isWatched, sizeof(isWatched));
		draw(cam.r, cam.c, direction::up);
		draw(cam.r, cam.c, direction::down);
		solve(k + 1);
		memcpy(isWatched, tmpWatched, sizeof(tmpWatched));

		memcpy(tmpWatched, isWatched, sizeof(isWatched));
		draw(cam.r, cam.c, direction::right);
		draw(cam.r, cam.c, direction::left);
		solve(k + 1);
		memcpy(isWatched, tmpWatched, sizeof(tmpWatched));
	}
	if (cam.type == 3) {
		memcpy(tmpWatched, isWatched, sizeof(isWatched));
		draw(cam.r, cam.c, direction::up);
		draw(cam.r, cam.c, direction::right);
		solve(k + 1);
		memcpy(isWatched, tmpWatched, sizeof(tmpWatched));

		memcpy(tmpWatched, isWatched, sizeof(isWatched));
		draw(cam.r, cam.c, direction::right);
		draw(cam.r, cam.c, direction::down);
		solve(k + 1);
		memcpy(isWatched, tmpWatched, sizeof(tmpWatched));

		memcpy(tmpWatched, isWatched, sizeof(isWatched));
		draw(cam.r, cam.c, direction::down);
		draw(cam.r, cam.c, direction::left);
		solve(k + 1);
		memcpy(isWatched, tmpWatched, sizeof(tmpWatched));

		memcpy(tmpWatched, isWatched, sizeof(isWatched));
		draw(cam.r, cam.c, direction::up);
		draw(cam.r, cam.c, direction::left);
		solve(k + 1);
		memcpy(isWatched, tmpWatched, sizeof(tmpWatched));
	}
	if (cam.type == 4) {
		memcpy(tmpWatched, isWatched, sizeof(isWatched));
		draw(cam.r, cam.c, direction::up);
		draw(cam.r, cam.c, direction::right);
		draw(cam.r, cam.c, direction::left);
		solve(k + 1);
		memcpy(isWatched, tmpWatched, sizeof(tmpWatched));

		memcpy(tmpWatched, isWatched, sizeof(isWatched));
		draw(cam.r, cam.c, direction::up);
		draw(cam.r, cam.c, direction::right);
		draw(cam.r, cam.c, direction::down);
		solve(k + 1);
		memcpy(isWatched, tmpWatched, sizeof(tmpWatched));

		memcpy(tmpWatched, isWatched, sizeof(isWatched));
		draw(cam.r, cam.c, direction::left);
		draw(cam.r, cam.c, direction::right);
		draw(cam.r, cam.c, direction::down);
		solve(k + 1);
		memcpy(isWatched, tmpWatched, sizeof(tmpWatched));

		memcpy(tmpWatched, isWatched, sizeof(isWatched));
		draw(cam.r, cam.c, direction::left);
		draw(cam.r, cam.c, direction::up);
		draw(cam.r, cam.c, direction::down);
		solve(k + 1);
		memcpy(isWatched, tmpWatched, sizeof(tmpWatched));
	}
	if (cam.type == 5) {
		memcpy(tmpWatched, isWatched, sizeof(isWatched));
		draw(cam.r, cam.c, direction::up);
		draw(cam.r, cam.c, direction::left);
		draw(cam.r, cam.c, direction::right);
		draw(cam.r, cam.c, direction::down);
		solve(k + 1);
		memcpy(isWatched, tmpWatched, sizeof(tmpWatched));
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> board[i][j];
			if (board[i][j] >= 1) {
				isWatched[i][j] = 1;
				if (board[i][j] == 6) continue;
				cctv cam;
				cam.type = board[i][j];
				cam.r = i;
				cam.c = j;
				cctvs[c++] = cam;
			}
		}
	}
	
	solve(0);

	cout << minarea;

	return 0;
}