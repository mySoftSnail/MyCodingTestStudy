#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	const int INF = 0x3f3f3f3f;
	int n, m, r;
	cin >> n >> m >> r;

	vector<vector<int>> d(n + 1, vector<int>(n + 1, INF));
	vector<int> item(n + 1, 0);
	for (int i = 1; i <= n; ++i)
		cin >> item[i];

	while (r--) {
		int a, b, length;
		cin >> a >> b >> length;
		d[a][b] = length;
		d[b][a] = length;
	}

	for (int i = 1; i <= n; ++i)
		d[i][i] = 0;

	for (int k = 1; k <= n; ++k)
		for (int i = 1; i <= n; ++i)
			for (int j = 1; j <= n; ++j)
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

	vector<int> ans(n + 1, 0); // ans[i]: i번 지역에 떨어졌을 때 얻을 수 있는 아이템의 최대 개수
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (d[i][j] <= m) {
				ans[i] += item[j];
			}
		}
	}

	cout << *max_element(ans.begin(), ans.end());
}

