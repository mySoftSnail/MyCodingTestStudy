#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[10003];

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> n >> m;
	for (int i = 0; i < n; ++i) cin >> a[i];

	int en = 0;
	int tot = a[0];
	int ans = 0;
	for (int st = 0; st < n; ++st) {
		while (en < n && tot < m) {
			en++;
			if (en != n) tot += a[en];
		}
		if (en == n) break;
		if (tot == m) ans++;
		tot -= a[st];
	}

	cout << ans;
}

