#include <bits/stdc++.h>
using namespace std;

int t, w;
int d[1003][32];
int a[1003];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> t >> w;

	int cnt = 0;
	for (int i = 1; i <= t; ++i) {
		cin >> a[i];
		if (a[i] == 1) cnt++;
		d[i][0] = cnt;
	}

	for (int i = 1; i <= t; ++i) {
		for (int j = 1; j <= w; ++j) {
			d[i][j] = max(d[i - 1][j - 1], d[i - 1][j]) + (1 + j % 2 == a[i]);
		}
	}

	cout << *max_element(d[t], d[t] + w + 1);
}

