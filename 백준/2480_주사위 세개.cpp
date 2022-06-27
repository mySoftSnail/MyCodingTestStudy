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

	if (d1 == d3) // 세 눈이 같음
		cout << 10000 + d1 * 1000;

	else if ((d1 == d2) || (d3 == d2)) // 그렇지 않고 중간수가 max와 같거나, min과 같음
		cout << 1000 + d2 * 100;

	else // 세 눈이 다 다름
		cout << d1 * 100;

	return 0;
}