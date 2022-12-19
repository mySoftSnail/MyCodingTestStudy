#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cout << i << ' ';
		if (i % 6 == 0 && i != n) cout << "Go! ";
	}
	cout << "Go!";
}

