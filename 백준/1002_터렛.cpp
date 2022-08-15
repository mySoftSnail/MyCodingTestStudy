#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		if ((x1 == x2) && (y1 == y2)) {
			if (r1 == r2) {
				cout << -1 << '\n';
				continue;
			}
			else {
				cout << 0 << '\n';
				continue;
			}
		}

		int dx = abs<int>(x1 - x2);
		int dy = abs<int>(y1 - y2);
		int dr = abs<int>(r1 - r2);
		int dist2 = dx * dx + dy * dy;
	
		if ((dist2 == (r1 + r2) * (r1 + r2)) || (dist2 == dr * dr)) {
			cout << 1 << '\n';
			continue;
		}

		if ((dist2 < dr * dr) || (dist2 > (r1 + r2) * (r1 + r2))) {
			cout << 0 << '\n';
			continue;
		}

		cout << 2 << '\n';

	}
	return 0;
}