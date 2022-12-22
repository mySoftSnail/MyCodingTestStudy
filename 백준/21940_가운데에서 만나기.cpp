#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	const int INF = 0x3f3f3f3f;
	int n, m;
	cin >> n >> m;

	vector<vector<int>> dist(n + 1, vector<int>(n + 1, INF));
	while (m--) {
		int a, b, t;
		cin >> a >> b >> t;
		dist[a][b] = t;
	}

	for (int i = 1; i <= n; ++i)
		dist[i][i] = 0;

	int k;
	cin >> k;
	vector<int> c(n + 1);
	for (int i = 1; i <= k; ++i)
		cin >> c[i];

	for (int k = 1; k <= n; ++k)
		for (int i = 1; i <= n; ++i)
			for (int j = 1; j <= n; ++j)
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

	vector<int> mx(n + 1, 0);
	for (int i = 1; i <= n; ++i) {
		int city = i; // 만나기로 한 도시
		for (int j = 1; j <= k; ++j) {
			int st = c[j];
			int time = dist[st][city] + dist[city][st];
			mx[city] = max(mx[city], time);
		}
	}

	int mn = *min_element(mx.begin() + 1, mx.end());
	vector<int> ans;
	for (int i = 1; i <= n; ++i) {
		if (mx[i] == mn)
			ans.push_back(i);
	}

	sort(ans.begin(), ans.end());
	for (auto x : ans)
		cout << x << ' ';
}
