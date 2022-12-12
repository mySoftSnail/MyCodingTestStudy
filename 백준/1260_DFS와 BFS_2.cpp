#include <bits/stdc++.h>
using namespace std;

int n, m, v;
vector<int> adj[1003];
bool vis[1003];

void dfs(int cur) {
	vis[cur] = true;
	cout << cur << ' ';
	for (int nxt : adj[cur]) {
		if (vis[nxt]) continue;
		dfs(nxt);
	}
}

void bfs(int i) {
	queue<int> q;
	q.push(i);
	vis[i] = true;
	while (!q.empty()) {
		int cur = q.front();
		cout << cur << ' ';
		q.pop();
		for (auto nxt : adj[cur]) {
			if (vis[nxt]) continue;
			q.push(nxt);
			vis[nxt] = true;
		}
	}
}

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> n >> m >> v;
	for (int i = 0; i < m; ++i) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for (int i = 1; i <= n; ++i)
		sort(adj[i].begin(), adj[i].end());

	dfs(v);
	cout << '\n';
	fill(vis, vis + 1003, false);
	bfs(v);
}

