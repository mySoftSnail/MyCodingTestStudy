#include <bits/stdc++.h>
using namespace std;

int d[305]; // d[i] = i��° ��ܱ��� �ö��� �� ���� ���� ����� ���� �ּڰ�, �� i��° ����� �ݵ�� ���� ���� ������� �����ؾ� ��
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