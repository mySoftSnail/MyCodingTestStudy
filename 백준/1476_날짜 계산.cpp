#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int e, s, m;
	cin >> e >> s >> m;
	if (e == 15) e = 0;
	if (s == 28) s = 0;
	if (m == 19) m = 0;

	int l = lcm(15, 28);
	int year;
	for (int x = e; x <= l; x += 15) {
		if (x == 0) continue;
		if (x % 28 == s) {
			year = x;
			break;
		}
	}

	l = lcm(15 * 28, 19);
	int ad = 15 * 28;
	for (int x = year; x <= l; x += ad) {
		if (x == 0) continue;
		if (x % 19 == m) {
			cout << x;
			return 0;
		}
	}
}

