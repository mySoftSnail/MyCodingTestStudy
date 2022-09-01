#include <bits/stdc++.h>
using namespace std;

vector<int> computer[103];
bool isInfected[103];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;

	for (int i = 0; i < k; ++i) {
		int c1, c2;
		cin >> c1 >> c2;
		computer[c1 - 1].push_back(c2 - 1);
		computer[c2 - 1].push_back(c1 - 1);
	}

	queue<int> Q;
	Q.push(0);
	isInfected[0] = true;

	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();

		for (int i = 0; i < computer[cur].size(); ++i) {
			int nx = computer[cur][i];

			if (isInfected[nx]) continue;

			Q.push(nx);
			isInfected[nx] = true;
		}
	}

	int ans = 0;
	for (int i = 0; i < n; ++i)
		ans += isInfected[i];

	cout << ans - 1;

	return 0;
}