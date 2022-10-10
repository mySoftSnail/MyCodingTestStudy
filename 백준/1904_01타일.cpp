#include <bits/stdc++.h>
using namespace std;

int n;
int d[1000003][2];
const int mod = 15746;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	
	d[1][0] = 0;
	d[1][1] = 1;
	d[2][0] = 1;
	d[2][1] = 1;

	for (int i = 3; i <= n; ++i) {
		d[i][0] = ((d[i - 2][0]) % mod + (d[i - 2][1]) % mod) % mod;
		d[i][1] = ((d[i - 1][0]) % mod + (d[i - 1][1]) % mod) % mod;
	}

	cout << (d[n][0] + d[n][1]) % mod;
}

