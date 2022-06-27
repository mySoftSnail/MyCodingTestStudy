#include <bits/stdc++.h>
using namespace std;

int main()
{
	int MinOdd = 99;
	int OddSum = 0;

	for (int i = 0; i < 7; ++i)
	{
		int N;
		cin >> N;

		if (N & 1)
		{
			OddSum += N;

			if (MinOdd > N)
			{
				MinOdd = N;
			}
		}
	}

	if (OddSum == 0)
	{
		cout << "-1";
	}
	else
	{
		cout << OddSum << '\n' << MinOdd;
	}

	return 0;
}