#include <bits/stdc++.h>
using namespace std;

int n;
int p[1003];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> p[i];

	sort(p, p + n);

	int ans = 0;
	int subsum = 0;
	for (int i = 0; i < n; ++i) {
		subsum += p[i];
		ans += subsum;
	}
	cout << ans;
}
