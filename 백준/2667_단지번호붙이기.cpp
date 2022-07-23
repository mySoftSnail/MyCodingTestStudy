#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[30][30];

int dx[4] = { 1,0,-1,0 };
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
			board[i][j] = str[j] - '0';
		}
	}

	vector<int> res;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {

			if (board[i][j] == 1) {
				queue<pair<int, int>> Q;
				board[i][j] = 2;
				int cnt = 1;
				Q.push({ i,j });

				while (!Q.empty()) {
					auto cur = Q.front();
					Q.pop();

					for (int d = 0; d < 4; ++d) {
						int nx = cur.X + dx[d];
						int ny = cur.Y + dy[d];

						if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
						if (board[nx][ny] == 0) continue;
						if (board[nx][ny] == 2) continue;
						board[nx][ny] = 2;
						cnt++;
						Q.push({ nx,ny });
					}
				}
				res.push_back(cnt);
			}
		}
	}

	cout << res.size() << '\n';
	sort(res.begin(), res.end());
	for (auto i : res)
		cout << i << '\n';

	return 0;
}