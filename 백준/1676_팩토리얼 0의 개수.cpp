#include <bits/stdc++.h>
using namespace std;

int two[503]; // i!������ ���μ� 2�� ����
int five[503]; // i!������ ���μ� 5�� ����

pair<int,int> GetTwoFivePairCount(int n) { // ���μ����� �Ͽ� 2*5�� �� �� �ִ��� ��ȯ
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

