#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b;
	cin >> a >> b;

	int ans = 0;
	int cnt = 0;
	for (int i = 1; i <= 1000;) {
		for (int j = 0; j < i; ++j) {
			cnt++;
			if (cnt >= a) {
				ans += i;
			}
			if (cnt >= b) {
				cout << ans;
				return 0;
			}
		}
		i++;
	}

	return 0;
}