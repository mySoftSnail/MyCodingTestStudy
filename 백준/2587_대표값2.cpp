#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int num[5];

	for (int i = 0; i < 5; ++i)
	{
		cin >> num[i];
	}

	sort(num, num + 5);

	int sum = 0;
	for (int& i : num)
		sum += i;

	cout << sum / 5 << '\n' << num[2];

	return 0;
}