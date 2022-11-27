#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n;
	cin >> n;

	int ans = 0;
	for (int i = 0; i < 5; ++i) {
		int x;
		cin >> x;
		ans += x == n;
	}
	cout << ans;
}

