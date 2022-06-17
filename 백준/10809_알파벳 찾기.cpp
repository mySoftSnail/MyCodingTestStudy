#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int len = s.size();

	for (int c = 97; c <= 122; ++c)
	{
		bool find = false;
		
		for (int i = 0; i < len; ++i)
		{
			if ((char)c == s[i])
			{
				cout << i << " ";
				find = true;
				break;
			}
		}

		if (!find)
		{
			cout << -1 << " ";
		}
	}

	return 0;
}