#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, f;
	cin >> n >> f;

	string origin = to_string(n);
	string extract = origin.substr(0, origin.size() - 2);

	n = stoi(extract);
	n *= 100;

	for (int i = 0; i <= 9; ++i) {
		for (int j = 0; j <= 9; ++j) {
			int tmp = n;
			tmp += i * 10;
			tmp += j;

			if (tmp % f == 0) {
				cout << i << j;
				return 0;
			}
		}
	}

	return 0;
}
