#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;

	int cnt = 0;
	while (x > 0) {
		if (x >= 64) {
			x -= 64;
			cnt++;
		}
		if (x >= 32) {
			x -= 32;
			cnt++;
		}
		if (x >= 16) {
			x -= 16;
			cnt++;
		}
		if (x >= 8) {
			x -= 8;
			cnt++;
		}
		if (x >= 4) {
			x -= 4;
			cnt++;
		}
		if (x >= 2) {
			x -= 2;
			cnt++;
		}
		if (x >= 1) {
			x -= 1;
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}