#include <bits/stdc++.h>
using namespace std;

int d[305]; // d[i] = i번째 계단까지 올라섰을 때 밟지 않을 계단의 합의 최솟값, 단 i번째 계단은 반드시 밟지 않을 계단으로 선택해야 함
int s[305];
int n;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	int tot = 0;
	for (int i = 1; i <= n; ++i) {
		cin >> s[i];
		tot += s[i];
	}

	d[1] = s[1];
	d[2] = s[2];
	d[3] = s[3];

	for (int k = 4; k <= n - 1; ++k)
		d[k] = min(d[k - 2], d[k - 3]) + s[k];
	
	cout << tot - min(d[n - 1], d[n - 2]);

	return 0;
}