#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		double x, y;
		string type;
		cin >> x >> type;
		cout << fixed << setprecision(4);
		if (type == "kg") {
			y = x * 2.2046;
			cout << y << " lb" << '\n';
		}
		if (type == "lb") {
			y = x * 0.4536;
			cout << y << " kg" << '\n';
		}
		if (type == "l") {
			y = x * 0.2642;
			cout << y << " g" << '\n';
		}
		if (type == "g") {
			y = x * 3.7854;
			cout << y << " l" << '\n';
		}
	}
}

