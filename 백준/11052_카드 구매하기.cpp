#include <bits/stdc++.h>
using namespace std;

int n;
int p[10003];
int d[10003]; // d[i]: i번째 카드팩까지 고려했을 때의 최대 금액

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 1; i <= n; ++i)
		cin >> p[i];

	d[1] = p[1];
	
	for (int i = 2; i <= n; ++i) {
		for (int k = 0; k <= i; ++k) {
			d[i] = max(d[i], d[k] + p[i - k]);
		}
	}

	cout << d[n];
}

/*

14
10 25 10 48 31 21 33 6 37 6 43 35 1 20
ans: 175

16
3 32 39 41 39 3 39 34 32 9 20 13 37 26 16 39
ans: 256

12
25 111 8 113 4 111 29 100 99 118 47 101
ans: 666

12
25 111 8 113 400 111 29 100 99 118 47 101
ans: 911


*/