#include <bits/stdc++.h>
using namespace std;

int n;
int board[22][22];
bool isMerged[22][22];
int ans = 0;

enum class direction {
	left, right, up, down
};

bool OOB(int x, int y) {
	if (x < 0 || y < 0 || x >= n || y >= n) return true;
	return false;
}

void moveBlock(direction d, int r, int c) {
	int dr, dc;

	switch (d) {
	case direction::left:
		dr = 0;
		dc = -1;
		break;
	case direction::right:
		dr = 0;
		dc = 1;
		break;
	case direction::up:
		dr = -1;
		dc = 0;
		break;
	case direction::down:
		dr = 1;
		dc = 0;
		break;
	}

	while (true) {
		int nr = r + dr;
		int nc = c + dc;
		if (OOB(nr, nc)) break;
		if (board[nr][nc] == 0) {
			board[nr][nc] = board[r][c];
		}
		else if ((board[nr][nc] == board[r][c]) &&
			(isMerged[nr][nc] == false) &&
			(isMerged[r][c] == false)) {
			board[nr][nc] = board[r][c] * 2;
			isMerged[nr][nc] = true;
			
		}
		else break;
		board[r][c] = 0;
		r = nr;
		c = nc;
	}
}

void moveBoard(direction d) {
	for (int i = 0; i < 22; ++i)
		fill(isMerged[i], isMerged[i] + 22, false);

	switch (d) {
	case direction::left:
		for (int i = 0; i < n; ++i) 
			for (int j = 0; j < n; ++j) 
				moveBlock(d, j, i);
		break;

	case direction::right:
		for (int i = n - 1; i >= 0; --i)
			for (int j = 0; j < n; ++j)
				moveBlock(d, j, i);
		break;

	case direction::up:
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
				moveBlock(d, i, j);
		break;

	case direction::down:
		for (int i = n - 1; i >= 0; --i)
			for (int j = 0; j < n; ++j)
				moveBlock(d, i, j);
		break;
	}
}

void backtrace(int k) {
	if (k == 5) {
		int boardMax = 0;
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
				boardMax = board[i][j] > boardMax ? board[i][j] : boardMax;

		ans = boardMax > ans ? boardMax : ans;
		return;
	}

	for (int d = 0; d < 4; ++d) {
		if (d == 0) {
			int tmp[22][22];
			memcpy(tmp, board, sizeof(board));
			moveBoard(direction::left);
			backtrace(k + 1);
			memcpy(board, tmp, sizeof(board));
		}
		if (d == 1) {
			int tmp[22][22];
			memcpy(tmp, board, sizeof(board));
			moveBoard(direction::right);
			backtrace(k + 1);
			memcpy(board, tmp, sizeof(board));
		}
		if (d == 2) {
			int tmp[22][22];
			memcpy(tmp, board, sizeof(board));
			moveBoard(direction::up);
			backtrace(k + 1);
			memcpy(board, tmp, sizeof(board));
		}
		if (d == 3) {
			int tmp[22][22];
			memcpy(tmp, board, sizeof(board));
			moveBoard(direction::down);
			backtrace(k + 1);
			memcpy(board, tmp, sizeof(board));
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			cin >> board[i][j];

	backtrace(0);

	cout << ans;

	return 0;
}