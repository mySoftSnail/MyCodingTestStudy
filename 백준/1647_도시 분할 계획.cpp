#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n, m;
	cin >> n >> m;

			// {���, ����}
	vector<pair<int, int>> adj[100003];
	for (int i = 0; i < m; ++i) {
		int a, b, cost;
		cin >> a >> b >> cost;
		adj[a].push_back({ cost, b });
		adj[b].push_back({ cost, a });
	}

						// {���, ����1, ����2}
	priority_queue<tuple<int, int, int>,
		vector<tuple<int, int, int>>,
		greater<tuple<int, int, int>> > pq;
	vector<bool> chk(n + 1, false); // chk[i]: i��° ������ MST�� �����ִ°�?
	int cnt = 0; // ���� ���õ� ������ ��

	chk[1] = 1;
	for (auto nxt : adj[1])
		pq.push({ nxt.X, 1, nxt.Y }); // {���, ����1, ����2}

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