#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	const int MXM = 1003;
	int n, m;
	cin >> n >> m;
	vector<pair<int,int>> adj[MXM];
	
	for (int i = 0; i < n - 1; ++i) {
		int u, v, d;
		cin >> u >> v >> d;
		adj[u].push_back({ v, d });
		adj[v].push_back({ u, d });
	}

	while (m--) {
		int u, v;
		cin >> u >> v;

		vector<int> p(MXM, 0);
		queue<pair<int, int>> q;
		q.push({ u,0 });

		while (!q.empty()) {
			auto [cur, dist] = q.front();
			if (cur == v) {
				cout << dist << '\n';
				break;
			}
			q.pop();

			for (auto [nxt, nxtDist] : adj[cur]) {
				if (p[cur] == nxt) continue;
				p[nxt] = cur;
				q.push({ nxt, dist + nxtDist });
			}
		}
	}
}

/*
5 5
1 2 1
2 3 2
4 3 3
4 5 4
2 4
1 5
3 4
4 5
1 2

#
5
10
3
4
1

*/