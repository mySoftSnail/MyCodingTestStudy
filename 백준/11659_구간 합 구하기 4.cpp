#include <bits/stdc++.h>
using namespace std;

int N, M;
int num[100000];
int d[100000];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	for (int i = 0; i < N; ++i)
		cin >> num[i];

	d[0] = num[0];
	for (int i = 1; i < N; ++i) 
		d[i] = d[i - 1] + num[i];

	while (M--) {
		int i, j;
		cin >> i >> j;
		cout << d[j - 1] - d[i - 1 - 1] << '\n';
	}

	return 0;
}