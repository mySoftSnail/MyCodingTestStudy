#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n, m;
	const int INF = 0x3f3f3f3f;
	cin >> n >> m;

	vector<vector<int>> d(n + 1, vector<int>(n + 1, INF));
	vector<vector<int>> nxt(n + 1, vector<int>(n + 1, 0));

	while (m--) {
		int a, b, cost;
		cin >> a >> b >> cost;
		d[a][b] = min(d[a][b], cost);
		nxt[a][b] = b;
	}

	for (int i = 1; i <= n; ++i)
		d[i][i] = 0;

	for (int k = 1; k <= n; ++k) {
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= n; ++j) {
				if (d[i][k] + d[k][j] < d[i][j]) {
					d[i][j] = d[i][k] + d[k][j];
					nxt[i][j] = nxt[i][k];
				}
			}
		}
	}

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (d[i][j] == INF)
				cout << "0 ";
			else
				cout << d[i][j] << ' ';
		}
		cout << '\n';
	}

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (d[i][j] == 0 || d[i][j] == INF) {
				cout << "0\n";
				continue;
			}
			vector<int> path;
			int st = i;
			while (st != j) {
				path.push_back(st);
				st = nxt[st][j];
			}
			path.push_back(j);
			cout << path.size() << ' ';
			for (auto x : path)
				cout << x << ' ';
			cout << '\n';
		}
	}
}

