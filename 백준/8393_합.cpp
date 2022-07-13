#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n;
	cin >> n;
	int res = 0;

	for (int i = 1; i <= n; ++i) {
		res += i;
	}

	cout << res;

	return 0;
}