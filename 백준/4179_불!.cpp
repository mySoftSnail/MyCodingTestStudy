#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int jh[1005][1005];
int fire[1005][1005];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) {
	return a.first < b.first;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 0; i < 1004; ++i) {
		fill(jh[i], jh[i] + 1004, -2);
		fill(fire[i], fire[i] + 1004, -2);
	}

	int r, c;
	cin >> r >> c;
	cin.ignore(1);
	
	queue<pair<int, int>> J;
	queue<pair<int, int>> F;

	string str;
	for (int i = 0; i < r; ++i) {
		getline(cin, str);
		for (int j = 0; j < str.size(); ++j) {
			if (str[j] == '#') {
				jh[i][j] = -1;
				fire[i][j] = -1;
			}
			if (str[j] == '.') {
				jh[i][j] = 0;
				fire[i][j] = 0;
			}
			if (str[j] == 'J') {
				jh[i][j] = 1;
				fire[i][j] = 0;
				J.push({ i,j });
			}
			if (str[j] == 'F') {
				jh[i][j] = 0;
				fire[i][j] = 1;
				F.push({ i,j });
			}
		}
	}

	bool escape = false;
	vector<pair<int, pair<int, int>>> escapeinfo;	// 걸린 시간, {x, y}
	while (!J.empty()) {
		pair<int, int> cur = J.front();
		J.pop();

		for (int d = 0; d < 4; ++d) {
			int nx = cur.X + dx[d];
			int ny = cur.Y + dy[d];

			if (jh[nx][ny] == -1) continue; 
			if (nx < 0 || nx >= r || ny < 0 || ny >= c) {
				escape = true;
				escapeinfo.push_back({ jh[cur.X][cur.Y] ,{cur.X, cur.Y} });
				break;
			}
			
			if (jh[nx][ny] > 1) continue;

			jh[nx][ny] = jh[cur.X][cur.Y] + 1;
			J.push({ nx,ny });
		}
	}
	
	if (!escape) {
		cout << "IMPOSSIBLE";
		return 0;
	}

	while (!F.empty()) {
		pair<int, int> cur = F.front();
		F.pop();
		for (int d = 0; d < 4; ++d) {
			int nx = cur.X + dx[d];
			int ny = cur.Y + dy[d];

			if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
			if (fire[nx][ny] == -1) continue;
			if (fire[nx][ny] >= 1) continue;

			fire[nx][ny] = fire[cur.X][cur.Y] + 1;
			F.push({ nx,ny });
		}
	}

	sort(escapeinfo.begin(), escapeinfo.end(), cmp);

	escape = false;
	for (auto e : escapeinfo) {
		if ((fire[e.second.X][e.second.Y] == 0) || (e.first < fire[e.second.X][e.second.Y])) {
			escape = true;
			cout << e.first;
			break;
		}
	}

	if (!escape) {
		cout << "IMPOSSIBLE";
	}

	return 0;
}
