#include <bits/stdc++.h>
using namespace std;

int c[32][32];

int comb(int n, int r) {
	if (r == 1) {
		c[n][r] = n;
		return n;
	}
	if (n == r) {
		c[n][r] = 1;
		return 1;
	}

	if (c[n][r]) return c[n][r];
	else {
		c[n][r] = comb(n - 1, r - 1) + comb(n - 1, r);
		return c[n][r];
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	while (t--) {

		int n, m;
		cin >> n >> m;

		cout << comb(m,n) << '\n';
	}

	return 0;
}