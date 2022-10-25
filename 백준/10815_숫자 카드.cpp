#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[500004];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i];

	sort(a, a + n);

	cin >> m;
	for (int i = 0; i < m; ++i) {
		int x;
		cin >> x;
		cout << binary_search(a, a + n, x) << ' ';
	}
}