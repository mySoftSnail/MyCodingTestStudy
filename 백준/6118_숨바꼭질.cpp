#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	const int MX = 20002;
	int n, m;
	vector<int> adj[MX];

	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	queue<int> q;
	vector<int> dist(n + 1, -1);
	dist[1] = 0;
	q.push(1);

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		for (int nxt : adj[cur]) {
			if (dist[nxt] != -1) continue;
			dist[nxt] = dist[cur] + 1;
			q.push(nxt);
		}
	}

	int mx = *max_element(dist.begin(), dist.end());
	int cnt = 0;
	bool p = false;
	for (int i = 1; i <= n; ++i) {
		if (dist[i] == mx) {
			if (!p) {
				cout << i << ' ';
				p = 1;
			}
			cnt++;
		}
	}
	cout << mx << ' ' << cnt;
}

