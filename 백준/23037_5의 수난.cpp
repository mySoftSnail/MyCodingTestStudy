#include <iostream>
using namespace std;

int FiveSquare(int x)
{
	int res = 1;

	for (int i = 0; i < 5; ++i)
	{
		res *= x;
	}

	return res;
}

int main()
{
	int n;
	cin >> n;

	int res = 0;

	while (n > 0)
	{
		res += FiveSquare(n % 10);
		n /= 10;
	}
	
	cout << res;

	return 0;
}
