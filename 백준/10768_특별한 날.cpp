#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int m, d;
	cin >> m >> d;

	if (m == 2 && d == 18) cout << "Special";
	else {
		int spe = 2 * 5555 + 18;
		int n = m * 5555 + d;
		if (n < spe) cout << "Before";
		else cout << "After";
	}
}

