#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[100003];

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> n >> m;
	for (int i = 0; i < n; ++i) cin >> a[i];
	sort(a, a + n);

	int ans = INT_MAX;
	int st, en;
	st = en = 0;

	while (en < n && st < n) {
		if (a[en] - a[st] >= m) {
			ans = min(ans, a[en] - a[st]);
			st++;
		}
		else en++;
	}

	cout << ans;
}