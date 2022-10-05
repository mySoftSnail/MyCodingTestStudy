#include <bits/stdc++.h>
using namespace std;

int v, e;
vector<int> vec[1003];
bool vis[1003];
int ans = 0;

void bfs() {
	queue<int> q;
	for (int i = 1; i <= v; ++i) {
		if (vis[i]) continue;

		ans++;
		q.push(i);
		vis[i] = true;

		while (!q.empty()) {
			
			int cur = q.front();
			q.pop();

			for (auto nxt : vec[cur]) {
				if (vis[nxt]) continue;
				vis[nxt] = true;
				q.push(nxt);
			}
		}
	
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> v >> e;
	for (int i = 0; i < e; ++i) {
		int u, v;
		cin >> u >> v;
		vec[u].push_back(v);
		vec[v].push_back(u);
	}

	bfs();

	cout << ans;
}