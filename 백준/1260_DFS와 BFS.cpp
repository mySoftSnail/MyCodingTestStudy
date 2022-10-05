#include <bits/stdc++.h>
using namespace std;

int v, e, st;
vector<int> adj[1003];
bool vis[1003];

void dfs(int cur) {
	vis[cur] = true;
	cout << cur << ' ';
	for (auto nxt : adj[cur]) {
		if (vis[nxt]) continue;
		dfs(nxt);
	}
}

void bfs() {
	queue<int> q;
	fill(vis, vis + 1003, 0);

	q.push(st);
	vis[st] = true;

	while (!q.empty()) {
		int cur = q.front();
		cout << cur << ' ';
		q.pop();
		for (int nxt : adj[cur]) {
			if (vis[nxt]) continue;
			q.push(nxt);
			vis[nxt] = true;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> v >> e >> st;
	for (int i = 0; i < e; ++i) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for (int i = 1; i <= v; ++i)
		sort(adj[i].begin(), adj[i].end());

	dfs(st);
	cout << '\n';
	bfs();
}
