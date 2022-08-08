#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll x, n;
	cin >> x >> n;

	ll sum = 0;
	for (ll i = 0; i < n; ++i) {
		ll a, b;
		cin >> a >> b;
		sum += a * b;
	}

	if (x == sum) cout << "Yes";
	else cout << "No";

	return 0;
}