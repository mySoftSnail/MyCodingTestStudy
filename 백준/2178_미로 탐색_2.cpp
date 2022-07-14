// vis 배열을 쓰지 않고 풀기
#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	cin.ignore(1);

	int dist[202][202];
	fill(&dist[0][0], &dist[201][201], -1);

	string str;
	for (int i = 0; i < n; ++i) {
		getline(cin, str);
		for (int j = 0; j < str.size(); ++j) {
			dist[i][j] = str[j] - '0';
		}
	}

	queue<pair<int, int>> Q;
	Q.push({ 0,0 });

	while (!Q.empty()) {
		pair<int, int> cur = Q.front();
		Q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (dist[nx][ny] == 0) continue; // 0이면 길이 아님
			if (dist[nx][ny] > 1) continue;	 // 이미 방문함	

			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
			Q.push({ nx,ny });
		}
	}

	cout << dist[n - 1][m - 1];

	return 0;
}