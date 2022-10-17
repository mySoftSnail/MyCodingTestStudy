#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b) {
	return a / gcd(a, b) * b;
}

int solve(int m, int n, int x, int y) {
	if (x == m) x = 0;
	if (n == y) y = 0;

	int LCM = lcm(m, n);
	for (int i = x; i <= LCM; i += m) {
		if (i == 0) continue;
		if ((i % m == x) && (i % n == y))
			return i;
	}
	return -1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, m, n, x, y;
	cin >> t;
	while (t--) {
		cin >> m >> n >> x >> y;

		cout << solve(m, n, x, y) << '\n';
	}
}

