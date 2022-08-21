#include <bits/stdc++.h>
using namespace std;

bool isHan(int n) {
	if (n < 100) return true;

	int tmp = n;
	int a = tmp / 100;
	tmp %= 100;
	int b = tmp / 10;
	tmp %= 10;
	int c = tmp;

	if ((a - b) == (b - c)) {
		return true;
	}
	else return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int res = 0;
	for (int i = 1; i <= n; ++i) {
		res += isHan(i);
	}

	cout << res;

	return 0;
}