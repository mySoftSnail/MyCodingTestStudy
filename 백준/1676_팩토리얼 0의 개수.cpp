#include <bits/stdc++.h>
using namespace std;

int two[503]; // i!까지의 소인수 2의 개수
int five[503]; // i!까지의 소인수 5의 개수

pair<int,int> GetTwoFivePairCount(int n) { // 소인수분해 하여 2*5가 몇 개 있는지 반환
	if (n == 1) return { 0,0 };

	int cntTwo = 0;
	int cntFive = 0;
	for (int i = 2; i * i <= n;) {
		if (n % i == 0) {
			n /= i;
			if (i == 2) cntTwo++;
			if (i == 5) cntFive++;
		}
		else i++;
	}
	if (n == 2) cntTwo++;
	if (n == 5) cntFive++;

	return { cntTwo, cntFive };
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		auto p = GetTwoFivePairCount(i);
		two[i] = two[i - 1] + p.first;
		five[i] = five[i - 1] + p.second;
	}

	cout << min(two[n], five[n]);
}

