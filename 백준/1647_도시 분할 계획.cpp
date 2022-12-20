#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n, m;
	cin >> n >> m;

			// {비용, 정점}
	vector<pair<int, int>> adj[100003];
	for (int i = 0; i < m; ++i) {
		int a, b, cost;
		cin >> a >> b >> cost;
		adj[a].push_back({ cost, b });
		adj[b].push_back({ cost, a });
	}

						// {비용, 정점1, 정점2}
	priority_queue<tuple<int, int, int>,
		vector<tuple<int, int, int>>,
		greater<tuple<int, int, int>> > pq;
	vector<bool> chk(n + 1, false); // chk[i]: i번째 정점이 MST에 속해있는가?
	int cnt = 0; // 현재 선택된 간선의 수

	chk[1] = 1;
	for (auto nxt : adj[1])
		pq.push({ nxt.X, 1, nxt.Y }); // {비용, 정점1, 정점2}

	int weight = 0;
	vector<int> costs;
	while (cnt < n - 1) {
		int cost, a, b;
		tie(cost, a, b) = pq.top();
		pq.pop();

		if (chk[b]) continue;

		chk[b] = 1;
		cnt++;
		weight += cost;
		costs.push_back(cost);

		for (auto nxt : adj[b])
			if (!chk[nxt.Y])
				pq.push({ nxt.X, b, nxt.Y });
	}

	int mx = *max_element(costs.begin(), costs.end());
	cout << weight - mx;

}