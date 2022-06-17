#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int res = 0;
	for (int i = 0; i < n; ++i)
	{
		char c;
		cin >> c;
		res += ((int)c) - 48;
	}

	cout << res;

	return 0;
}