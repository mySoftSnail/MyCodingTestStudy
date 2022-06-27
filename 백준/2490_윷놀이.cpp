#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str = "DCBAE";

	for (int i = 0; i < 3; ++i)
	{
		int idx = 0;
		for (int j = 0; j < 4; ++j)
		{
			int v;
			cin >> v;
			idx += v;
		}
		
		cout << str[idx] << '\n';
	}

	return 0;
}