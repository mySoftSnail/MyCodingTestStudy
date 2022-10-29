#include <bits/stdc++.h>
using namespace std;

int n, s;
int a[100003];

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> n >> s;
	for (int i = 0; i < n; ++i) cin >> a[i];

	int len = INT_MAX;
	int en = 0;
	int sum = a[0];
	for (int st = 0; st < n; ++st) {
		while (sum < s && en < n) {
			en++;
			if (en != n) sum += a[en];
		}
		if (en == n) break;
		len = min(len, en - st + 1);
		sum -= a[st];
	}

	if (len == INT_MAX) len = 0;
	cout << len;
}

/*

���� s�̻��� �� ������ en�� ����
s�̻��� �Ǹ� st�� �ű�� �ٽ� �ݺ�

*/
