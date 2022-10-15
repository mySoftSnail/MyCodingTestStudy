#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	if (n == 1) return 0;

	for (int i = 2; i * i <= n;) {
		if (n % i == 0) {
			n /= i;
			cout << i << '\n';
		}
		else i++;
	}
	cout << n << '\n';
}

