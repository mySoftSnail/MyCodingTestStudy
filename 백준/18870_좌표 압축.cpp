#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000003];
int tmp[1000003];
vector<int> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i];
	memcpy(tmp, a, sizeof(a));
	sort(a, a + n);

	int last = INT_MIN;
	for (int i = 0; i < n; ++i) {
		if (last != a[i])
			v.push_back(a[i]);
		last = a[i];
	}

	for (int i = 0; i < n;++i) {
		cout << lower_bound(v.begin(), v.end(), tmp[i]) - v.begin() << ' ';
	}
}
