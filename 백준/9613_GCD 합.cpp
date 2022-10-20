#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> v;
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			v.push_back(x);
		}

		long long ans = 0;
		vector<bool> comb(n, 1);
		fill(comb.begin(), comb.begin() + 2, 0);
		do {
			int a, b;
			a = b = -1;
			for (int i = 0; i < n; ++i) {
				if (comb[i] == 0) {
					if (a == -1) a = v[i];
					else {
						b = v[i];
						break;
					}
				}
			}

			ans += gcd(a, b);

		} while (next_permutation(comb.begin(), comb.end()));

		cout << ans << '\n';
	}
}

