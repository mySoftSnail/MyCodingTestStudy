#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int ans = 0;
	while (n) {
		ans += n / 5;
		n /= 5;
	}
	cout << ans;
}

/*

10�� ���ؾ� 0�� �߰��ǹǷ� 10�� �� �� ���������� ���� �ȴ�.
10�� 2 x 5 �� ���μ� ���ذ� �Ǵµ� 2�� ����� 5�� ������� ���� ������ 5�� ������ ���� �ȴ�.

*/

