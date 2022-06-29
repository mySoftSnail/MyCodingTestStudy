#include <bits/stdc++.h>
using namespace std;

int num[10];

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	long long n = a * b * c;

	while (n != 0)
	{
		num[n % 10]++;
		n /= 10;
	}

	for (int i : num)
		cout << i << '\n';

	return 0;
}