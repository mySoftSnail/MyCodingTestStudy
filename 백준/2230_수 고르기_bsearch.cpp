#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
ll a[100003];

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> n >> m;
	for (int i = 0; i < n; ++i) cin >> a[i];
	sort(a, a + n);

	ll ans = LLONG_MAX;
	for (int i = 0; i < n; ++i) {
		int idx = lower_bound(a, a + n, a[i] + m) - a;
		if (idx < n) 
			ans = min(ans, abs(a[i] - a[idx]));
	}

	cout << ans;
}
