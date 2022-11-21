#include <bits/stdc++.h>
using namespace std;

int ToSec(int h, int m, int s) {
	return 3600 * h + 60 * m + s;
}

auto ToTime(int sec) {
	int x, y, z;
	x = sec / 3600;
	sec %= 3600;
	y = sec / 60;
	sec %= 60;
	z = sec;

	return tuple(x, y, z);
}

int main() {
	cin.tie(0)->sync_with_stdio(0);

	for (int i = 0; i < 3; ++i) {
		int h1, m1, s1;
		int h2, m2, s2;
		cin >> h1 >> m1 >> s1;
		cin >> h2 >> m2 >> s2;
		int a = ToSec(h1, m1, s1);
		int b = ToSec(h2, m2, s2);

		auto [x, y, z] = ToTime(b - a);

		cout << x << ' ' << y << ' ' << z << '\n';
	}
}

