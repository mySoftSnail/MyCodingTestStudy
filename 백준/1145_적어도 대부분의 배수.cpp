#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	int i = 1;
	while (true) {
		int k = (i % a == 0) + (i % b == 0) + (i % c == 0) + (i % d == 0) + (i % e == 0);
		if (k >= 3) break;
		i++;
	}

	cout << i;

	return 0;
}