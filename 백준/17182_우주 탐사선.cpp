#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	const int INF = 0x3f3f3f3f;
	int n, k;
	cin >> n >> k;
	vector<vector<int>> dist(n, vector<int>(n, INF));

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			cin >> dist[i][j];

	for (int k = 0; k < n; ++k)
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

	vector<int> seq;
	for (int i = 0; i < n; ++i)
		if (i != k)
			seq.push_back(i);
	sort(seq.begin(), seq.end());

	int ans = INT_MAX;
	do {
		int st = k;
		int temp = 0;
		for (auto x : seq) {
			temp += dist[st][x];
			st = x;
		}
		ans = min(temp, ans);
	} while (next_permutation(seq.begin(), seq.end()));

	cout << ans;
}