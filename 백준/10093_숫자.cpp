#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	unsigned long long A, B, Big, Small;

	cin >> A >> B;

	if (A == B)
	{
		cout << 0 << '\n';
		return 0;
	}
	
	if (A > B)
	{
		Big = A;
		Small = B;
	}
	else
	{
		Big = B;
		Small = A;
	}

	cout << Big - Small - 1 << '\n';
	for (unsigned long long i = Small + 1; i < Big; ++i)
	{
		cout << i << ' ';
	}

	return 0;
}