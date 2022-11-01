#include <bits/stdc++.h>
using namespace std;

int a, b, c, d;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> a >> b >> c >> d;

	while (d > 0) {
		if (d >= 3600) {
			a += d / 3600;
			d %= 3600;
		}
		else if (d >= 60) {
			b += d / 60;
			d %= 60;
		}
		else {
			c += d;
			d = 0;
		}
	}

	if (c >= 60) {
		b += c / 60;
		c %= 60;
	}

	if (b >= 60) {
		a += b / 60;
		b %= 60;
	}

	if (a >= 24) {
		a %= 24;
	}

	cout << a << ' ' << b << ' ' << c;
}

