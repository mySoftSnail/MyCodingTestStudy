#include <bits/stdc++.h>
using namespace std;

int n;
int a[100003][4];
int d[100003][4];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int caseN = 1;
	while (1) {
		cin >> n;
		if (n == 0) break;

		for (int i = 1; i <= n; ++i) {
			for (int k = 1; k <= 3; ++k) {
				cin >> a[i][k];
			}
		}
		d[1][1] = INT_MAX;
		d[1][2] = a[1][2];
		d[1][3] = d[1][2] + a[1][3];

		for (int i = 2; i <= n; ++i) {
			d[i][1] = min(d[i - 1][1], d[i - 1][2]) + a[i][1];
			d[i][2] = min({ d[i][1], d[i - 1][1], d[i - 1][2], d[i - 1][3] }) + a[i][2];
			d[i][3] = min({ d[i][2] , d[i - 1][2], d[i - 1][3] }) + a[i][3];
		}

		cout << caseN << ". " << d[n][2] << '\n';
		caseN++;
	}
}

