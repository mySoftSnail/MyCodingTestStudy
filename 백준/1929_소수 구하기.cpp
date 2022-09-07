#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
	if (num == 1) return false;
	for (int i = 2; i * i <= num; ++i)
		if (num % i == 0) return false;
	return true;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int m, n;
	cin >> m >> n;

	for (int i = m; i <= n; ++i)
		if (isPrime(i)) cout << i << '\n';
	
	return 0;
}