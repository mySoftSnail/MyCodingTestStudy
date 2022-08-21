#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, a, b;
	cin >> n >> a >> b;

	int r = 1;
	while (n > 1) {
		int mn = min(a, b);
		int mx = max(a, b);
		if ((mn % 2 == 1) && ((mx - mn) == 1)) {
			cout << r;
			return 0;
		}
		a = (int)(ceil(a / 2.0));
		b = (int)(ceil(b / 2.0));
		n = (int)(ceil(n / 2.0));
		r++;
	}

	cout << -1;

	return 0;
}