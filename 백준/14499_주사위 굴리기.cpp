#include <bits/stdc++.h>
using namespace std;

int n, m, x, y, k;
int board[22][22];
int dice[6];

bool OOB(int x, int y) {
	return x < 0 || y < 0 || x >= n || y >= m;
}

void moveDice(int dir) {
	int tmp[6];
	memcpy(tmp, dice, sizeof(dice));

	switch (dir) {
	case 1: // µ¿
		dice[0] = tmp[1];
		dice[1] = tmp[5];
		dice[2] = tmp[2];
		dice[3] = tmp[0];
		dice[4] = tmp[4];
		dice[5] = tmp[3];
		break;
	case 2: // ¼­
		dice[0] = tmp[3];
		dice[1] = tmp[0];
		dice[2] = tmp[2];
		dice[3] = tmp[5];
		dice[4] = tmp[4];
		dice[5] = tmp[1];
		break;
	case 4: // ³²
		dice[0] = tmp[2];
		dice[1] = tmp[1];
		dice[2] = tmp[5];
		dice[3] = tmp[3];
		dice[4] = tmp[0];
		dice[5] = tmp[4];
		break;
	case 3: // ºÏ
		dice[0] = tmp[4];
		dice[1] = tmp[1];
		dice[2] = tmp[0];
		dice[3] = tmp[3];
		dice[4] = tmp[5];
		dice[5] = tmp[2];
		break;
	}
}

bool solve(int dir) {
	int dr, dc;
	dr = dc = 0;
	switch (dir) {
	case 1: // µ¿
		dr = 0;
		dc = 1;
		break;
	case 2: // ¼­
		dr = 0;
		dc = -1;
		break;
	case 4: // ³²
		dr = 1;
		dc = 0;
		break;
	case 3: // ºÏ
		dr = -1;
		dc = 0;
		break;
	}
	if (OOB(x + dr, y + dc)) return false;

	x += dr;
	y += dc;

	moveDice(dir);

	if (board[x][y] == 0) {
		board[x][y] = dice[5];
	}
	else {
		dice[5] = board[x][y];
		board[x][y] = 0;
	}

	return true;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m >> x >> y >> k;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> board[i][j];

	while (k--) {
		int d;
		cin >> d;
		if (solve(d)) {
			cout << dice[0] << '\n';
		}
	}

	return 0;
}