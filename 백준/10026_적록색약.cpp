#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int grid[103][103];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	cin.ignore(1);

	string str;
	for (int i = 0; i < n; ++i) {
		getline(cin, str);
		for (int j = 0; j < str.size(); ++j) {
			grid[i][j] = (int)str[j];
		}
	}

	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if ((grid[i][j] == 'R') || (grid[i][j] == 'G') || (grid[i][j] == 'B')) {
				int c = grid[i][j];

				if (grid[i][j] == 'R') {
					grid[i][j] = 1;
				}
				if (grid[i][j] == 'G') {
					grid[i][j] = 1;
				}
				if (grid[i][j] == 'B') {
					grid[i][j] = 0;
				}

				cnt++;
				queue<pair<int, int>> Q;
				Q.push({ i,j });

				while (!Q.empty()) {
					auto cur = Q.front();
					Q.pop();

					for (int d = 0; d < 4; ++d) {
						int nx = cur.X + dx[d];
						int ny = cur.Y + dy[d];

						if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
						if (grid[nx][ny] != c) continue;

						if (grid[nx][ny] == 'R') {
							grid[nx][ny] = 1;
						}
						if (grid[nx][ny] == 'G') {
							grid[nx][ny] = 1;
						}
						if (grid[nx][ny] == 'B') {
							grid[nx][ny] = 0;
						}
						Q.push({ nx,ny });
					}
				}
			}
		}
	}

	cout << cnt << ' ';

	cnt = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if ((grid[i][j] == 1) || (grid[i][j] == 0)) {
				char c = grid[i][j];
				cnt++;
				queue<pair<int, int>> Q;
				Q.push({ i,j });

				while (!Q.empty()) {
					auto cur = Q.front();
					Q.pop();

					for (int d = 0; d < 4; ++d) {
						int nx = cur.X + dx[d];
						int ny = cur.Y + dy[d];

						if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
						if (grid[nx][ny] == -1) continue;
						if (grid[nx][ny] != c) continue;
					
						grid[nx][ny] = -1;
						
						Q.push({ nx,ny });
					}
				}
			}
		}
	}

	cout << cnt;

	return 0;
}