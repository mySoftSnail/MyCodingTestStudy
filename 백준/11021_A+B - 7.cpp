#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	
	for (int i = 1; i <= t; ++i) {
		cout << "Case #" << i << ": ";
		int a, b;
		cin >> a >> b;
		cout << a + b << '\n';
	}

	return 0;
}