#include <bits/stdc++.h>
using namespace std;

int dist[200'000];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	fill(dist, dist + 200'000, -1);

	int n, k;
	cin >> n >> k;

	if (n == k) {
		cout << 0;
		return 0;
	}

	dist[n] = 0;

	queue<int> Q;
	Q.push(n);

	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();

		int nx;
		for (int d = 0; d < 3; ++d) {
			switch (d) {
			case 0:
				nx = cur - 1;
				break;
			case 1:
				nx = cur + 1;
				break;
			case 2:
				nx = cur * 2;
				break;
			}

			if (nx == k) {
				cout << dist[cur] + 1;
				return 0;
			}
			if (nx < 0 || nx >= 200'000) continue;
			if (dist[nx] >= 0) continue;

			dist[nx] = dist[cur] + 1;
			Q.push(nx);
		}
	}
	
	return 0;
}