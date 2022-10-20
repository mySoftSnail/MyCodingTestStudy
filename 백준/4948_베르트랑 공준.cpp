#include <bits/stdc++.h>
using namespace std;

const int n(250000);
vector<bool> state(250000, true);

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	state[1] = false;
	for (int i = 2; i * i <= n; ++i) {
		if (!state[i]) continue;
		for (int j = i * i; j <= n; j += i)
			state[j] = false;
	}

	int x;
	while (1) {
		cin >> x;
		if (!x) break;

		int cnt = 0;
		for (int i = x + 1; i <= 2 * x; ++i) 
			cnt += state[i];
		cout << cnt << '\n';
	}
}

