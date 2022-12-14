#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n, m;
	cin >> n >> m;
	vector<int> adj[32003];
	vector<int> deg(n, 0);
	while (m--) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		deg[v]++;
	}

	queue<int> q;
	for (int i = 1; i <= n; ++i) {
		if (!deg[i]) q.push(i);
	}

	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		cout << cur << ' ';
		for (int nxt : adj[cur]) {
			deg[nxt]--;
			if (!deg[nxt]) q.push(nxt);
		}
	}
}

