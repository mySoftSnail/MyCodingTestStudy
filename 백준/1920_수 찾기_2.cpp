#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[100003];

bool binarysearch(int x) {
	int st = 0;
	int en = n - 1;

	while (st <= en) {
		int mid = (st + en) / 2;
		if (a[mid] == x) return true;
		else if (a[mid] < x) {
			st = mid + 1;
		}
		else if (a[mid] > x) {
			en = mid - 1;
		}
	}
	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	sort(a, a + n);

	cin >> m;
	for (int i = 0; i < m; ++i) {
		int x;
		cin >> x;
		cout << binarysearch(x) << '\n';
	}
}