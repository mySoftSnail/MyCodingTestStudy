#include <iostream>
using namespace std;

int main()
{
	int Apart[15][15];
	
	for (int i = 0; i < 15; ++i)
	{
		Apart[0][i] = i;
		Apart[i][0] = 0;
	}

	for (int i = 1; i <= 14; ++i)
	{
		for (int j = 1; j <= 14; ++j)
		{
			Apart[i][j] = Apart[i - 1][j] + Apart[i][j - 1];
		}
	}

	int t;
	cin >> t;
	while (t--)
	{
		int k, n;
		cin >> k >> n;
		cout << Apart[k][n] << '\n';
	}

	return 0;
}