#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1003];
bool vis[1003];

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> n >> m;
	for (int i = 1; i <= m; ++i) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	int cnt = 0;
	for (int i = 1; i <= n; ++i) {
		queue<int> q;
		if (!vis[i]) {
			q.push(i);
			cnt++;
			vis[i] = true;
			while (!q.empty()) {
				int cur = q.front();
				q.pop();
				for (auto nxt : adj[cur]) {
					if (vis[nxt]) continue;
					q.push(nxt);
					vis[nxt] = true;
				}
			}
		}
	}

	cout << cnt;
}

