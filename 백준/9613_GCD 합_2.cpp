#include <bits/stdc++.h>
using namespace std;

int a[102];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		long long ans = 0;

		for (int i = 0; i < n; ++i)
			cin >> a[i];
		
		for (int i = 0; i < n; ++i)
			for (int j = i + 1; j < n; ++j)
				ans += gcd(a[i], a[j]);

		cout << ans << '\n';
	}
}
