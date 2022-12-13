#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> adj[100003];
int p[100003];

void bfs(int root) {
	queue<int> q;
	q.push(root);

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		for (int nxt : adj[cur]) {
			if (p[cur] == nxt) continue;
			q.push(nxt);
			p[nxt] = cur;
		}
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

	bfs(1);

	for (int i = 2; i <= n; ++i)
		cout << p[i] << '\n';
}
