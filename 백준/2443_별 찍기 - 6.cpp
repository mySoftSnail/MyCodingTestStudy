#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	
	int starcount = 2 * n - 1;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < i; ++j) cout << ' ';
		for (int k = 0; k < starcount; ++k) cout << '*';
		starcount -= 2;
		cout << '\n';
	}

	return 0;
}