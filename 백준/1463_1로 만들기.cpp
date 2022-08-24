#include <bits/stdc++.h>
using namespace std;

int dist[1000001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	fill(dist, dist + 1000001, -1);
	queue<int> q;
	q.push(1);
	dist[1] = 0;
	q.push(2);
	dist[2] = 1;
	q.push(3);
	dist[3] = 1;

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		for (int d = 0; d < 3; ++d) {
			int nx;
			switch (d) {
			case 0:
				nx = cur * 3;
				break;
			case 1:
				nx = cur * 2;
				break;
			case 2:
				nx = cur + 1;
				break;
			}

			if (nx > 1000000) continue;
			if (dist[nx] != -1) continue;
			dist[nx] = dist[cur] + 1;
			q.push(nx);
		}
	}

	int n;
	cin >> n;
	cout << dist[n];

	return 0;
}