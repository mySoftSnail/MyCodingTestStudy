#include <bits/stdc++.h>
using namespace std;

int N;
int d[1000003];
int pre[1000003]; // 경로 추적

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	d[1] = 0;
	pre[1] = 0;
	for (int i = 2; i <= N; ++i) {
		int d3, d2, s1;
		d3 = d2 = INT_MAX;
		s1 = d[i - 1] + 1;

		if (i % 3 == 0) d3 = d[i / 3] + 1;
		if (i % 2 == 0) d2 = d[i / 2] + 1;

		int mn = min({ d3, d2, s1 });
		d[i] = mn;
		
		if (mn == d3) pre[i] = i / 3;	
		else if (mn == d2) pre[i] = i / 2;	
		else pre[i] = i - 1;
	}

	cout << d[N] << '\n' << N << ' ';
	int tmp = d[N];
	while (tmp--) {
		cout << pre[N] << ' ';
		N = pre[N];
	}

	return 0;
}