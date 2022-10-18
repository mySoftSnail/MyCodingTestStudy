#include <bits/stdc++.h>
using namespace std;

int c[1003][1003]; // c[i][j]: iCj i개에서 j개를 순서 없이 뽑는 경우의 수
// nCk = n-1Ck-1 + n-1Ck
int n, k;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;

	for (int i = 1; i <= n; ++i) {
		c[i][0] = c[i][i] = 1;
		for (int j = 1; j < i; ++j)
			c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % 10007;
	}

	cout << c[n][k];
}

