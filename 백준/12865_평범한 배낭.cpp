#include <bits/stdc++.h>
using namespace std;

int d[103][100003]; // d[i][k]: �ִ� ���԰� k�̰�, 1��° ���Ǻ��� i��° ���Ǳ��� ������� �� ��ġ�� �ִ�
int w[103], v[103];

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; ++i) 
		cin >> w[i] >> v[i];

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= k; ++j) {
			if (j >= w[i])
				d[i][j] = max(d[i - 1][j], d[i - 1][j - w[i]] + v[i]);
			else
				d[i][j] = d[i - 1][j];
		}
	}

	cout << d[n][k];
}