#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
int n;
ull d[1000003];
int mod = 1000000009;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	d[1] = 1;
	d[2] = 2;
	d[3] = 4;
	for (int i = 4; i < 1000003; ++i) {
		d[i] = (d[i - 1] + d[i - 2] + d[i - 3]) % mod;
	}

	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << d[n] << '\n';
	}
}

