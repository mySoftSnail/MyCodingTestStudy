#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	ll n;
	cin >> n;

	ll sum = n * (n - 1) / 2;

	ll acc = 0;
	for (int i = 0; i < n; ++i) {
		ll x;
		cin >> x;
		acc += x;
	}

	cout << acc - sum;
}