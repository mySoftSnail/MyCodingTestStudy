#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int m, n;
int a[1000003];

bool solve(int x) {
	ll cur = 0;
	for (int i = 0; i < n; ++i)
		cur += a[i] / x;
	return cur >= m;
}

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> m >> n;
	for (int i = 0; i < n; ++i) cin >> a[i];

	int st = 1;
	int en = 1e9;

	int ans = -1;
	while (st < en) {
		int mid = (st + en + 1) / 2;
		if (solve(mid)) {
			st = mid;
			ans = st;
		}
		else en = mid - 1;
	}

	if (ans != -1)
		cout << ans;
	else cout << 0;
}

