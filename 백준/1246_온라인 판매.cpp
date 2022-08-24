#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n, m;
int price[1003];
ll ans;
int sel;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < m; ++i)
		cin >> price[i];

	sort(price, price + m, greater<int>());

	for (int i = 0; i < m; ++i) {
		ll p = 0;
		int cnt = 0;
		for (int j = 0; j < m; ++j) {
			if (price[j] >= price[i]) {
				p += price[i];
				cnt++;
				if (cnt == n) break;
			}
		}
		ans = max(ans, p);
		if (ans == p) sel = price[i];
	}
	
	cout << sel << ' ' << ans;

	return 0;
}