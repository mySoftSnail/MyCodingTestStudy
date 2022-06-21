#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;

	while (true)
	{
		cin >> N;
		if (N == 0) break;

		string StringN = to_string(N);

		int Front = 0;
		int Back = StringN.size() - 1;

		bool IsPalindrome = true;
		while (Front <= Back)
		{
			if (StringN[Front] == StringN[Back])
			{
				Front++;
				Back--;
			}
			else
			{
				IsPalindrome = false;
				break;
			}
		}

		IsPalindrome ? cout << "yes\n" : cout << "no\n";
	}

	return 0;
}