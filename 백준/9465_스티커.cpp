#include <bits/stdc++.h>
using namespace std;

int a[3][100003];
int d[100003][3];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		for (int i = 1; i <= 2; ++i) 
			for (int k = 1; k <= n; ++k) 
				cin >> a[i][k];

		d[1][0] = 0;
		d[1][1] = a[1][1];
		d[1][2] = a[2][1];

		for (int i = 2; i <= n; ++i) {
			d[i][0] = max({ d[i - 1][0], d[i - 1][1], d[i - 1][2] });
			d[i][1] = max(d[i - 1][0], d[i - 1][2]) + a[1][i];
			d[i][2] = max(d[i - 1][0], d[i - 1][1]) + a[2][i];
		}

		cout << *max_element(d[n], d[n] + 3) << '\n';

		for (int i = 0; i < 3; ++i) 
			for (int k = 0; k < 100003; ++k)
				a[i][k] = 0;
		for (int i = 0; i < 100003; ++i)
			for (int k = 0; k < 3; ++k)
				d[i][k] = 0;
	}
}