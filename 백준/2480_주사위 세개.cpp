#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int d1, d2, d3;
	d1 = max({ a,b,c, });
	d3 = min({ a,b,c, });
	d2 = a + b + c - d1 - d3;

	if (d1 == d3) // �� ���� ����
		cout << 10000 + d1 * 1000;

	else if ((d1 == d2) || (d3 == d2)) // �׷��� �ʰ� �߰����� max�� ���ų�, min�� ����
		cout << 1000 + d2 * 100;

	else // �� ���� �� �ٸ�
		cout << d1 * 100;

	return 0;
}