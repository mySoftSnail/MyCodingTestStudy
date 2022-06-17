#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int FinalScore = 0;
		int AccScore = 0;

		string str;
		cin >> str;
		int len = str.size();

		for (int j = 0; j < len; ++j)
		{
			if (str[j] == 'O')
			{
				FinalScore += ++AccScore;
			}
			else
			{
				AccScore = 0;
			}
		}
		cout << FinalScore << '\n';
	}

	return 0;
}