#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> adj[100003];
int p[100003];

void dfs(int cur) {
	for (int nxt : adj[cur]) {
		if (p[cur] == nxt) continue;
		p[nxt] = cur;
		dfs(nxt);
	}
}

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> n;
	for (int i = 0; i < n - 1; ++i) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	dfs(1);

	for (int i = 2; i <= n; ++i)
		cout << p[i] << '\n';
}
