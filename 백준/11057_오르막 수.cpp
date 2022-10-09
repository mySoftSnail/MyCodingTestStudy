#include <bits/stdc++.h>
using namespace std;

const int mod = 10007;
int n;
int d[1003][10]; // d[i][j]: 길이가 i인 오르막 수의 개수, 단 마지막 수가 j임. (j=0,1,2,...,8,9)

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i <= 9; ++i)
		d[1][i] = 1;

	for (int i = 2; i <= n; ++i) {
		for (int k = 0; k <= 9; ++k) {
			int sum = 0;
			for (int j = 0; j <= k; ++j) {
				sum += d[i - 1][j];
				sum %= mod;
			}
			d[i][k] = sum % mod;
		}
	}

	int ans = 0;
	for (int i = 0; i <= 9; ++i) {
		ans += d[n][i];
		ans %= mod;
	}
	cout << ans % mod;
}

