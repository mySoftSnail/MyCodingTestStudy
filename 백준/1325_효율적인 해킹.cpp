#include <bits/stdc++.h>
using namespace std;

const int MX = 10003;
int n, m;
vector<int> adj[MX];

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		int u, v;
		cin >> u >> v;
		adj[v].push_back(u);
	}

	int mx = -1;
	vector<pair<int, int>> res;
	for (int i = 1; i <= n; ++i) {
		vector<bool> vis(n + 1, false);
		queue<int> q;
		q.push(i);
		vis[i] = true;
		int cnt = 0;

		while (!q.empty()) {
			int cur = q.front();
			q.pop();
			cnt++;
			for (int nxt : adj[cur]) {
				if (vis[nxt]) continue;
				vis[nxt] = true;
				q.push(nxt);
			}
		}
		res.push_back({ i, cnt });
		mx = max(mx, cnt);
	}

	sort(res.begin(), res.end());
	for (auto e : res) {
		if (e.second == mx)
			cout << e.first << ' ';
	}
}