#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;

		int value = 1;
		for (int i = 0; i < b; ++i) {
			value = (value * a) % 10;
		}
		if (value == 0) cout << 10 << '\n';
		else cout << value << '\n';
	}

	return 0;
}