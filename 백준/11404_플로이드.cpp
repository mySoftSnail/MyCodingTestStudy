#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n, m;
	const int INF = 0x3f3f3f3f;
	cin >> n >> m;

	vector<vector<int>> d(n + 1, vector<int>(n + 1, INF));

	while(m--) {
		int st, en, cost;
		cin >> st >> en >> cost;
		d[st][en] = min(d[st][en], cost);
	}

	for (int i = 1; i <= n; ++i) 
		d[i][i] = 0;

	for (int k = 1; k <= n; ++k) 
		for (int i = 1; i <= n; ++i) 
			for (int j = 1; j <= n; ++j) 
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
				// if (d[i][k] + d[k][j] < d[i][j])
				//     d[i][j] = d[i][k] + d[k][j]    매번 대입이 일어나는 것 보다 빠름

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (d[i][j] >= INF)
				cout << 0 << ' ';
			else
				cout << d[i][j] << ' ';
		}
		cout << '\n';
	}

}