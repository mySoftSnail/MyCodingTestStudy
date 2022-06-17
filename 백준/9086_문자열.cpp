#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;

	string str;
	for (int i = 0; i < t; ++i)
	{
		cin >> str;
		cout << str[0] << str[str.size() - 1] << '\n';
	}

	return 0;
}