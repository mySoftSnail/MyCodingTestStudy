#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1003];
bool vis[1003];
int ans = 0;

void dfs(int i) {
	stack<int> s;
	s.push(i);
	while (!s.empty()) {
		int cur = s.top();
		s.pop();
		for (int nxt : adj[cur]) {
			if (vis[nxt]) continue;
			s.push(nxt);
			vis[nxt] = true;
		}
	}
}

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for (int i = 1; i <= n; ++i) {
		if (!vis[i]) {
			dfs(i);
			ans++;
		}
	}

	cout << ans;
}

