#include <bits/stdc++.h>
using namespace std;

int ans[5];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int mx = -1;
	for (int i = 0; i < 4; ++i) {
		int out, in;
		cin >> out >> in;
		ans[i] -= out;
		ans[i] += in;
		ans[i + 1] = ans[i];
		mx = max(ans[i], mx);
	}

	cout << mx;
}

