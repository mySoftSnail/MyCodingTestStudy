#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;

	vector<bool> state(n + 1, true);
	state[1] = false;

	int erase = 0;
	for (int i = 2; i <= n; ++i) {
		if (state[i]) {
			state[i] = false;
			if (++erase == k) cout << i;
			for (int j = i+i; j <= n; j += i) {
				if (state[j]) {
					state[j] = false;
					if (++erase == k) cout << j;
				}
			}
		}
	}
}
