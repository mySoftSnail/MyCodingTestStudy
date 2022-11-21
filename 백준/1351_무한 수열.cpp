#define ll long long
#include <bits/stdc++.h>
using namespace std;

ll n, p, q;
unordered_map<ll, ll> mp;

ll solve(ll n) {
	if (n == 0) return 1;

	if (mp.find(n) == mp.end()) 
		mp[n] = solve(n / p) + solve(n / q);
	return mp[n];
}

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> n >> p >> q;

	ll ans = solve(n);

	cout << ans;
}