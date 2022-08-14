#include <bits/stdc++.h>
using namespace std;

bool prime(int n) {
	if (n < 2) return false;

	for (int i = 2; i <= n / 2; ++i) 
		if (n % i == 0) return false;

	return true;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int cnt = 0;
	int x;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		cnt += prime(x);
	}

	cout << cnt;

	return 0;
}