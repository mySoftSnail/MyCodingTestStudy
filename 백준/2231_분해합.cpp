#include <iostream>
using namespace std;

int GetDecompositonSum(int n)
{
	int Result = n;

	while (n > 10)
	{
		Result += n % 10;
		n /= 10;
	}
	Result += n;

	return Result;
}

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i < 1'000'000; ++i)
	{
		if (GetDecompositonSum(i) == n)
		{
			cout << i;
			return 0;
		}
	}

	cout << 0;

	return 0;
}