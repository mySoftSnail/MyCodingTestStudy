#include <bits/stdc++.h>
using namespace std;

int n;
int a[10003];

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i];

	sort(a, a + n);

	long long ans = 0;

	for (int i = 0; i < n; ++i) 
		for (int j = i + 1; j < n; ++j) 
			ans += upper_bound(a + j + 1, a + n, -a[i] - a[j]) - lower_bound(a + j + 1, a + n, -a[i] - a[j]);

	cout << ans;
}

/*
두 참가자를 정하고 합해서 0이 될 수 있는 다른 참가자를 찾는다
단, 이미 정한 두 참가자를 또 찾으면 안 된다
*/