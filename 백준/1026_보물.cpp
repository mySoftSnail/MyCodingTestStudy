#include <bits/stdc++.h>
using namespace std;

int n;
int a[52];
int b[52];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	for (int i = 0; i < n; ++i)
		cin >> b[i];

	sort(a, a + n);
	sort(b, b + n, greater<int>());

	int ans = 0;
	for (int i = 0; i < n; ++i)
		ans += a[i] * b[i];
	cout << ans;

}