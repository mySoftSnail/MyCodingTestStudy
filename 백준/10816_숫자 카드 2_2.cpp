#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[500003];

int lower_idx(int target, int len) {
	int st = 0;
	int en = len;
	while (st < en) {
		int mid = (st + en) / 2;
		if (a[mid] >= target) en = mid;
		else st = mid + 1;
	}
	return st;
}

int upper_idx(int target, int len) {
	int st = 0;
	int en = len;
	while (st < en) {
		int mid = (st + en) / 2;
		if (a[mid] > target) en = mid;
		else st = mid + 1;
	}
	return st;
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
		cout << upper_idx(x, n) - lower_idx(x, n) << ' ';
	}

}

