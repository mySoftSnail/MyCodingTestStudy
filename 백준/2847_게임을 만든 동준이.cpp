#include <bits/stdc++.h>
using namespace std;

int n;
int a[102];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	int ans = 0;
	int lv = a[n - 1];
	for (int i = n - 2; i >= 0; --i) {
		if (a[i] > lv - 1) {
			ans += a[i] - (lv - 1);
			a[i] = lv - 1;
		}
		lv = a[i];
	}

	cout << ans;
}

