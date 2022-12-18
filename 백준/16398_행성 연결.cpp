#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
using ll = long long;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<pair<int, int>> *adj = new vector<pair<int, int>>[n + 3];

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			int cost;
			cin >> cost;
			adj[i].push_back({ cost, j });
			adj[j].push_back({ cost, i });
		}
	}

	priority_queue<tuple<int, int, int>,
		vector<tuple<int, int, int>>,
		greater<tuple<int, int, int>> > pq;
	vector<bool> chk(n + 3);
	
	chk[1] = 1;
	for (auto nxt : adj[1])
		pq.push({ nxt.X, 1, nxt.Y });

	int cnt = 0;
	ll ans = 0;
	while (cnt < n - 1) {
		int cost, a, b;
		tie(cost, a, b) = pq.top();
		pq.pop();

		if (chk[b]) continue;
		ans += cost;
		chk[b] = 1;
		cnt++;

		for (auto nxt : adj[b])
			pq.push({ nxt.X, b, nxt.Y });
	}
	
	cout << ans;
	
	delete[] adj;
}

