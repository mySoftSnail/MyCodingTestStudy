#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n, m;
	vector<int> adj[1003];
	cin >> n >> m;
	vector<int> deg(n + 1, 0);
	while (m--) {
		int n;
		cin >> n;
		int pre = -1;
		while (n--) {
			int x;
			cin >> x;
			if (pre == -1) {
				pre = x;
			}
			else {
				adj[pre].push_back(x);
				deg[x]++;
				pre = x;
			}
		}
	}

	queue<int> q;
	for (int i = 1; i <= n; ++i) {
		if (deg[i] == 0)
			q.push(i);
	}

	vector<int> res;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		res.push_back(cur);

		for (int nxt : adj[cur]) {
			deg[nxt]--;
			if (deg[nxt] == 0)
				q.push(nxt);
		}
	}

	if (res.size() != n)
		cout << 0;
	else {
		for (auto e : res)
			cout << e << '\n';
	}
}