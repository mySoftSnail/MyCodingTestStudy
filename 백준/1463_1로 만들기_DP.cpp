#include <bits/stdc++.h>
using namespace std;

int N;
int d[1000003];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;

	d[1] = 0;
	for (int i = 2; i <= N; ++i) {
		int d3, d2, s1;
		d3 = d2 = s1 = INT_MAX;

		if (i % 3 == 0) d3 = d[i / 3] + 1;
		if (i % 2 == 0) d2 = d[i / 2] + 1;
		s1 = d[i - 1] + 1;

		d[i] = min({ d3, d2, s1 });
	}

	cout << d[N];

	return 0;
}