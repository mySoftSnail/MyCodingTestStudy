#include <bits/stdc++.h>
using namespace std;

int n;
int a[100003];

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i];

	int ans1, ans2;
	ans1 = ans2 = 1e9 + 5;

	for (int i = 0; i < n; ++i) {
		int idx = lower_bound(a, a + n, -a[i]) - a;
		if (idx > 0 && idx <= n - 1 && a[idx] != a[i] && abs(a[idx] + a[i]) < abs(ans1 + ans2)) {
			ans1 = a[i];
			ans2 = a[idx];
		}
		if (idx - 1 > 0 && idx - 1 <= n - 1 && a[idx - 1] != a[i] && abs(a[idx - 1] + a[i]) < abs(ans1 + ans2)) {
			ans1 = a[i];
			ans2 = a[idx - 1];
		}
		if (idx + 1 > 0 && idx + 1 <= n - 1 && a[idx + 1] != a[i] && abs(a[idx + 1] + a[i]) < abs(ans1 + ans2)) {
			ans1 = a[i];
			ans2 = a[idx + 1];
		}
	}

	cout << ans1 << ' ' << ans2;
}