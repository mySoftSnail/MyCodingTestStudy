#include <bits/stdc++.h>
using namespace std;

int n, r, q;
vector<int> adj[100003];
int sz[100003];
bool vis[100003];

void countSubtree(int cur) {
	vis[cur] = true;
	sz[cur] = 1;
	for (int nxt : adj[cur]) {
		if (vis[nxt]) continue;
		countSubtree(nxt);
		vis[nxt] = true;
		sz[cur] += sz[nxt];
	}
}

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> n >> r >> q;
	for (int i = 0; i < n - 1; ++i) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	countSubtree(r);

	while (q--) {
		int query;
		cin >> query;
		cout << sz[query] << '\n';
	}
}