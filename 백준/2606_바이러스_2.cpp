#include <bits/stdc++.h>
using namespace std;

vector<int> vec[103];
bool vis[103];
int v, e;

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
	
	queue<int> q;
	q.push(1);
	vis[1] = true;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		for (int nxt : vec[cur]) {
			if (vis[nxt]) continue;
			q.push(nxt);
			vis[nxt] = true;
		}
	}

	int ans = 0;
	for (int i = 0; i <= v; ++i)
		ans += vis[i];

	cout << ans - 1;
}

