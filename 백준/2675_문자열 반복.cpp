#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int r;
		string str;
		cin >> r >> str;

		int len = str.size();

		for (int j = 0; j < len; ++j)
		{
			for (int k = 0; k < r; ++k)
			{
				cout << str[j];
			}
		}
		cout << '\n';
	}

	return 0;
}