#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;

	vector<int> v(n);
	for (int i = 1; i <= n; ++i)
		v[i - 1] = i;

	cout << '<';
	auto it = v.begin();
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < k - 1; ++j) {
			if (it == v.end()) it = v.begin();
			it++;
			if (it == v.end()) it = v.begin();
		}
		cout << *it << ", ";
		it = v.erase(it);
	}

	cout << v[0] << '>';

	return 0;
}