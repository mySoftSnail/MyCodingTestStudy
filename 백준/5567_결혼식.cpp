#include <bits/stdc++.h>
using namespace std;

int v, e;
vector<int> adj[503];
int dist[503];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> v >> e;
	for (int i = 0; i < e; ++i) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	fill(dist, dist + v + 2, -1);
	queue<int> q;
	q.push(1);
	dist[1] = 0;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		for (int nxt : adj[cur]) {
			if (dist[nxt] >= 0) continue;
			dist[nxt] = dist[cur] + 1;
			q.push(nxt);
		}
	}

	int ans = 0;
	for (int i = 2; i <= v; ++i) 
		if (dist[i] == 1 || dist[i] == 2) ans++;
	cout << ans;
}

