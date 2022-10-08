#include <bits/stdc++.h>
using namespace std;

int n;
int a[10003];
int d[10003][4];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	d[0][0] = 0;
	d[0][1] = a[0];
	d[0][2] = a[0];
	d[1][0] = a[0];
	d[1][1] = a[1];
	d[1][2] = a[0] + a[1];

	for (int i = 2; i < n; ++i) {
		d[i][0] = max({ d[i - 1][0], d[i - 1][1], d[i - 1][2], d[i - 2][0], d[i - 2][1], d[i - 2][2] });
		d[i][1] = max({ d[i - 2][0], d[i - 2][1], d[i - 2][2] }) + a[i];
		d[i][2] = d[i - 1][1] + a[i];
	}

	int ans = -1;
	for (int i = 0; i < n; ++i)
		ans = max(ans, max({ d[i][0], d[i][1], d[i][2] }));

	cout << ans;
}