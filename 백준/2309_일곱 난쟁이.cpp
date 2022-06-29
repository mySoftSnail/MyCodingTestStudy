#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int nj[9];
	for (int i = 0; i < 9; ++i)
		cin >> nj[i];

	sort(nj, nj + 9);

	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			if (i == j) continue;

			int sum = 0;
			for (int v : nj)
				sum += v;
			sum -= (nj[i] + nj[j]);

			if (sum == 100)
			{
				for (int k = 0; k < 9; ++k)
				{
					if (k == i || k == j) continue;
					cout << nj[k] << '\n';
				}

				return 0;
			}
		}
	}

	return 0;
}