#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int v, e;
vector<pair<int, int>> adj[10005];
bool chk[10005];

int main() {
	cin.tie(0)->sync_with_stdio(0);
	
	cin >> v >> e;
	for (int i = 0; i < e; ++i) {
		int a, b, c;
		cin >> a >> b >> c;
		adj[a].push_back({ c,b });
		adj[b].push_back({ c,a });
	}

	int cnt = 0;
	priority_queue<tuple<int, int, int>,
		vector<tuple<int, int, int>>,
		greater<tuple<int, int, int>> > pq;

	chk[1] = 1;
	for (auto nxt : adj[1])
		pq.push({ nxt.X, 1, nxt.Y });

	int weight = 0;
	while (cnt < v - 1) {
		int cost, a, b;
		tie(cost, a, b) = pq.top();
		pq.pop();

		if (chk[b]) continue;
		weight += cost;
		chk[b] = 1;
		cnt++;

		for (auto nxt : adj[b]) {
			if (!chk[nxt.Y])
				pq.push({ nxt.X, b, nxt.Y });
		}
	}

	cout << weight;
}