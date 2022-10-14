#include <bits/stdc++.h>
using namespace std;

int t, n;
int a[1000004];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; ++i)
			cin >> a[i];

		long long profit = 0;
		int mx = a[n - 1];
		for (int i = n - 2; i >= 0; --i) {
			if (a[i] > mx) {
				mx = a[i];
				continue;
			}
			else {
				profit += mx - a[i];
			}
		}

		cout << profit << '\n';
	}
}