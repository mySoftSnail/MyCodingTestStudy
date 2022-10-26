#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
int a[1000003];

bool solve(int h) {
	ll sum = 0;
	for (int i = 0; i < n; ++i)
		sum += max(0, a[i] - h);
	return sum >= m;
}

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> n >> m;
	for (int i = 0; i < n; ++i) cin >> a[i];

	int st = 0; 
	int en = *max_element(a, a + n);

	while (st < en) {
		int mid = (st + en + 1) / 2;
		if (solve(mid)) st = mid;
		else en = mid - 1;
	}

	cout << st;
}