#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[500004], b[500004];

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> n >> m;
	for (int i = 0; i < n; ++i) cin >> a[i];
	for (int i = 0; i < m; ++i) cin >> b[i];

	sort(a, a + n);
	sort(b, b + m);

	int cnt = n;
	for (int i = 0; i < n; ++i) {
		if (binary_search(b, b + m, a[i])) {
			a[i] = -1;
			cnt--;
		}
	}

	cout << cnt << '\n';
	for (int i = 0; i < n; ++i) {
		if (a[i] != -1)
			cout << a[i] << ' ';
	}
}

