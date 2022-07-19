#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int r, c;
int sg[1002][1002];
int fire[1002][1002];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	while (t--) {
		cin >> c >> r;
		cin.ignore(1);

		for (int i = 0; i < r; ++i) {
			fill(sg[i], sg[i] + c, -1);
			fill(fire[i], fire[i] + c, -1);
		}

		string str;
		queue<pair<int, int>> Q;
		pair<int, int> sgpos;
		for (int i = 0; i < r; ++i) {
			getline(cin, str);
			for (int j = 0; j < str.size(); ++j) {
				if (str[j] == '.') {
					sg[i][j] = 0;
					fire[i][j] = 0;
				}
				if (str[j] == '@') {
					sg[i][j] = 1;
					fire[i][j] = 0;
					sgpos = { i,j };
				}
				if (str[j] == '*') {
					sg[i][j] = 0;
					fire[i][j] = 1;
					Q.push({ i,j });
				}
			}
		}

		while (!Q.empty()) {
			auto cur = Q.front();
			Q.pop();
			for (int d = 0; d < 4; ++d) {
				int nx = cur.X + dx[d];
				int ny = cur.Y + dy[d];

				if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
				if (fire[nx][ny] == -1) continue;
				if (fire[nx][ny] >= 1) continue;
				fire[nx][ny] = fire[cur.X][cur.Y] + 1;
				Q.push({ nx,ny });
			}
		}

		Q.push(sgpos);
		bool escape = false;
		while (!Q.empty() && !escape) {
			auto cur = Q.front();
			Q.pop();
			for (int d = 0; d < 4; ++d) {
				int nx = cur.X + dx[d];
				int ny = cur.Y + dy[d];

				if (nx < 0 || nx >= r || ny < 0 || ny >= c) {
					cout << sg[cur.X][cur.Y] << '\n';
					escape = true;
					break;
				}
				if (sg[nx][ny] == -1) continue;
				if (sg[nx][ny] >= 1) continue;
				if ((fire[nx][ny] != 0) && (fire[nx][ny] <= sg[cur.X][cur.Y] + 1)) continue;

				sg[nx][ny] = sg[cur.X][cur.Y] + 1;
				Q.push({ nx,ny });
			}
		}

		if (!escape) {
			cout << "IMPOSSIBLE\n";
		}
	}

	return 0;
}