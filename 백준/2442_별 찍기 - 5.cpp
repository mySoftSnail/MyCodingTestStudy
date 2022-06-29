#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;

	int maxstar = 2 * n - 1;
	int start = n;
	int end = start;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 1; j <= maxstar; ++j)
		{
			if (j > end) break;
			if (j >= start) cout << '*';
			else cout << ' ';
		}
		start--;
		end++;
		cout << '\n';
	}

	return 0;
}