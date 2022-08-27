#include <bits/stdc++.h>
using namespace std;

string board[4];
bool isRotated[4];

void rotate(int cogN, int dir) {
	if (isRotated[cogN]) return;
	isRotated[cogN] = true;

	if (cogN == 0) {
		if (board[0][2] != board[1][6]) {
			rotate(1, dir * -1);
		}
		else isRotated[cogN] = true;
	}
	if (cogN == 1) {
		if (board[1][2] != board[2][6]) {
			rotate(2, dir * -1);
		}
		else isRotated[cogN] = true;
		if (board[0][2] != board[1][6]) {
			rotate(0, dir * -1);
		}
		else isRotated[cogN] = true;
	}
	if (cogN == 2) {
		if (board[1][2] != board[2][6]) {
			rotate(1, dir * -1);
		}
		else isRotated[cogN] = true;
		if (board[2][2] != board[3][6]) {
			rotate(3, dir * -1);
		}
		else isRotated[cogN] = true;
	}
	if (cogN == 3) {
		if (board[2][2] != board[3][6]) {
			rotate(2, dir * -1);
		}
		else isRotated[cogN] = true;
	}

	if (dir == 1) {
		string tmp;
		tmp += board[cogN][7];
		tmp += board[cogN].substr(0, 7);
		board[cogN] = tmp;
	}
	if (dir == -1) {
		string tmp = board[cogN].substr(1, 7);
		tmp += board[cogN][0];
		board[cogN] = tmp;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 0; i < 4; ++i)
		cin >> board[i];

	int k;
	cin >> k;
	while (k--) {
		int cogN, dir;
		cin >> cogN >> dir;
		fill(isRotated, isRotated + 4, false);
		rotate(cogN - 1, dir);
	}

	int score = (board[0][0] - '0') * 1 + (board[1][0] - '0') * 2 + (board[2][0] - '0') * 4 + (board[3][0] - '0') * 8;
	cout << score;

	return 0;
}