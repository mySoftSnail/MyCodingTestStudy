#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int max = -1'000'000;
	int min = 1'000'000;

	int v;
	for (int i = 0; i < n; ++i)
	{
		cin >> v;
		if (v > max) { max = v; }
		if (v < min) { min = v; }
	}

	cout << min << ' ' << max;

	return 0;
}