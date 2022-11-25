#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int k;
		cin >> k;

		priority_queue<ll, vector<ll>, greater<ll>> pq;
		while (k--) {
			int x;
			cin >> x;
			pq.push(x);
		}

		ll ans = 0;
		while (pq.size() > 1) {
			ll a = pq.top();
			pq.pop();
			ll b = pq.top();
			pq.pop();
			ans += (a + b);
			pq.push(a + b);
		}

		cout << ans << '\n';
	}
}

