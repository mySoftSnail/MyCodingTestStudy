#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[10003]; // 동전 종류들
int d[10003]; // d[i]: 동전들로 i원을 만드는 경우의 수

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	d[0] = 1; // 특정 동전 한 종류만 써서 k원을 만들기 위한 초기값
	for (int i = 0; i < n; ++i)
		for (int j = a[i]; j <= k; ++j)
			d[j] += d[j - a[i]];

	cout << d[k];
}

