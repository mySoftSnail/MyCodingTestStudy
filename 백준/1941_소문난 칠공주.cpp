#include <bits/stdc++.h>
using namespace std;

bool mask[25];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
string board[5];
int ans = 0;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	fill(mask + 7, mask + 25, true);

	for (int i = 0; i < 5; ++i)
		cin >> board[i];

	do {
		queue<pair<int, int>> q;
		bool vis[5][5] = {}, isp7[5][5] = {};

		for (int i = 0; i < 25; ++i) {
			if (!mask[i]) {
				int x = i / 5, y = i % 5;
				isp7[x][y] = true;

				if (q.empty()) {
					q.push({ x,y });
					vis[x][y] = true;
				}
			}
		}

		int adj = 0, dasom = 0;
		while (!q.empty()) {
			int x, y;
			tie(x, y) = q.front();
			q.pop();
			adj++;
			dasom += board[x][y] == 'S';

			for (int d = 0; d < 4; ++d) {
				int nx = x + dx[d], ny = y + dy[d];
				if (nx < 0 || nx >= 5 || ny < 0 || ny >= 5 || vis[nx][ny] || !isp7[nx][ny])
					continue;
				q.push({ nx,ny });
				vis[nx][ny] = true;
			}
		}

		if (adj >= 7 && dasom >= 4) ans++;

	} while (next_permutation(mask, mask + 25));

	cout << ans;

	return 0;
}