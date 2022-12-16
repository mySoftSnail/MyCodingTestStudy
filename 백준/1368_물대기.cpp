#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n;
	cin >> n;
	vector<pair<int, int>> adj[303];
	vector<bool> chk(303, false);
	for (int i = 1; i <= n; ++i) {
		int w;
		cin >> w; // i��° �� �칰�� �Ĵ� ���
		adj[n + 1].push_back({ w, i });
		adj[i].push_back({ w, n + 1 });
	}

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			int p;
			cin >> p;
			if (!p) continue;
			adj[i].push_back({ p,j });
			adj[j].push_back({ p,i });
		}
	}

	int cnt = 0;
	int weight = 0;
	priority_queue<tuple<int, int, int>,
		vector<tuple<int, int, int>>,
		greater<tuple<int, int, int>> > pq;

	chk[1] = 1;
	for (auto nxt : adj[1])
		pq.push({ nxt.X, 1, nxt.Y });

	n++; // ������ ���� ���� �߰�
	while (cnt < n - 1) {
		int cost, a, b;
		tie(cost, a, b) = pq.top();
		pq.pop();

		if (chk[b]) continue;
		weight += cost;
		chk[b] = 1;
		cnt++;

		for (auto nxt : adj[b])
			if (!chk[nxt.Y])
				pq.push({ nxt.X, b, nxt.Y });
	}

	cout << weight;
}

// ���� �˰��� Ǯ��