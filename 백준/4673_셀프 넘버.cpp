#include <bits/stdc++.h>
using namespace std;

bool arr[10004];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 1; i <= 10000; ++i) {
		int dn = i;
		int tmp = i;
		while (tmp != 0) {
			dn += tmp % 10;
			tmp /= 10;
		}

		if (dn < 10004)	
			arr[dn] = true;
	}

	for (int i = 1; i <= 10000; ++i) {
		if (!arr[i]) cout << i << '\n';
	}

	return 0;
}