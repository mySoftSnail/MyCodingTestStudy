#include <bits/stdc++.h>
using namespace std;

int l;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> l;
	int ans = 0;
	while (l != 0) {
		for (int i = 5; i >= 1; --i) {
			if (l / i > 0) {
				l -= i;
				ans++;
				break;
			}
		}
	}
	
	cout << ans;
}

