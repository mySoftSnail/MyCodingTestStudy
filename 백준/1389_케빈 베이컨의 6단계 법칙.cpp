#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	const int MX = 103;
	vector<int> adj[MX];
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; ++i) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for (int i = 1; i <= n; ++i) {
		sort(adj[i].begin(), adj[i].end());
		adj[i].erase(unique(adj[i].begin(), adj[i].end()), adj[i].end());
	}

	vector<pair<int, int>> res;
	for (int st = 1; st <= n; ++st) {
		
		vector<int> dist(MX, -1);
		queue<int> q;
		q.push(st);
		dist[st] = 0;

		while (!q.empty()) {
			int cur = q.front();
			q.pop();
			for (int nxt : adj[cur]) {
				if (dist[nxt] != -1) continue;
				dist[nxt] = dist[cur] + 1;
				q.push(nxt);
			}
		}

		int kev = 0;
		for (int i = 1; i <= n; ++i) {
			if (i == st) continue;
			kev += dist[i];
		}
		res.push_back({ kev, st });
	}

	sort(res.begin(), res.end());
	cout << res[0].second;
}

