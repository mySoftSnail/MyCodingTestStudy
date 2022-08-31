#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int n, m, r, c, d;
int board[52][52];
int ans = 0;

auto getPos() {
	pair<int, int> left, forward, right, backward;
	left.X = forward.X = right.X = backward.X = r;
	left.Y = forward.Y = right.Y = backward.Y = c;

	switch (d) { 
	case 0: // ºÏ
		left.Y += -1;
		forward.X += -1;
		right.Y += 1;
		backward.X += 1;
		break;

	case 1: // µ¿
		left.X += -1;
		forward.Y += 1;
		right.X += 1;
		backward.Y += -1;
		break;

	case 2: // ³²
		left.Y += 1;
		forward.X += 1;
		right.Y += -1;
		backward.X += -1;
		break;

	case 3: // ¼­
		left.X += 1;
		forward.Y += -1;
		right.X += -1;
		backward.Y += 1;
		break;
	}

	return tuple(left, forward, right, backward);
}

void rotLeft() {
	switch (d) {
	case 0:
		d = 3;
		break;
	case 1:
		d = 0;
		break;
	case 2:
		d = 1;
		break;
	case 3:
		d = 2;
		break;
	}
}

void solve() {
	while (true) {
		if (board[r][c] == 0) {
			ans++;
			board[r][c] = 2;
		}

		auto [left, forward, right, backward] = getPos();

		if ((board[left.X][left.Y] != 0) &&
			(board[forward.X][forward.Y] != 0) &&
			(board[right.X][right.Y] != 0) &&
			(board[backward.X][backward.Y] != 0)) {

			if (board[backward.X][backward.Y] == 1) break;
				
			r = backward.X;
			c = backward.Y;
			continue;
		}
		
		if (board[left.X][left.Y] == 0) {
			rotLeft();
			auto [left, forward, right, backward] = getPos();
			if (board[forward.X][forward.Y] != 1) {
				r = forward.X;
				c = forward.Y;
			}
			continue;
		}
		else
		{
			rotLeft();
			continue;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m >> r >> c >> d;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> board[i][j];

	solve();

	cout << ans;

	return 0;
}