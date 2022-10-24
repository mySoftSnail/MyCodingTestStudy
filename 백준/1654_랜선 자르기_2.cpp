#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int k, n;
int a[10004];

bool solve(ll x) { // 길이가 x일때 랜선이 n개 이상인가?
	ll cur = 0;
	for (int i = 0; i < k; ++i)
		cur += a[i] / x;
	return cur >= n;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> k >> n;
	for (int i = 0; i < k; ++i) cin >> a[i];

	ll st = 1;
	ll en = 0x7fffffff;	// 2^31 - 1

	while (st < en) {
		ll mid = (st + en + 1) / 2;
		if (solve(mid)) st = mid;
		else en = mid - 1;
	}

	cout << st << '\n';
}

