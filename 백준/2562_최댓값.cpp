#include <iostream>
using namespace std;

int main()
{
	int a[9];
	
	for (int i = 0; i < 9; ++i)
	{
		cin >> a[i];
	}

	int MaxValue = a[0];
	int MaxIndex = 0;

	for (int i = 1; i < 9; ++i)
	{
		if (a[i] > MaxValue)
		{
			MaxValue = a[i];
			MaxIndex = i;
		}
	}

	cout << MaxValue << '\n' << MaxIndex + 1;

	return 0;
}