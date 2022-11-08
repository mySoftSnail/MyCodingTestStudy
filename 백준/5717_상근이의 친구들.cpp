#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int m, f;
	while (1) {
		cin >> m >> f;
		if (!m && !f) break;
		cout << m + f << '\n';
	}
}