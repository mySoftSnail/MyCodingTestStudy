#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n;
	cin >> n;
	
	bool get = false;
	int ans = INT_MAX;

	while (n--) {
		int d, t;
		cin >> d >> t;
		if (d <= t) {
			get = true;
			ans = min(ans, t);
		}
	}

	if (!get) cout << -1;
	else cout << ans;
}