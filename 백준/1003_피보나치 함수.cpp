#include <bits/stdc++.h>
using namespace std;

int T, N;
int D[44][2];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	D[0][0] = 1;
	D[0][1] = 0;
	D[1][0] = 0;
	D[1][1] = 1;

	for (int k = 2; k <= 40; ++k) {
		D[k][0] = D[k - 1][0] + D[k - 2][0];
		D[k][1] = D[k - 1][1] + D[k - 2][1];
	}

	cin >> T;
	while (T--) {
		cin >> N;
		cout << D[N][0] << ' ' << D[N][1] << '\n';
	}

	return 0;
}