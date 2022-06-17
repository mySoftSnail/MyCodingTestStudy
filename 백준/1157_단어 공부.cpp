#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;

	int Alphabet['Z' - 'A' + 1] = { 0 };

	size_t Length = str.size();

	for (int i = 0; i < Length; ++i)
	{
		if (('a' <= str[i]) && (str[i] <= 'z'))
		{
			Alphabet[str[i] - 'a'] += 1;
		}
		else
		{
			Alphabet[str[i] - 'A'] += 1;
		}
	}

	int MaxValue = Alphabet[0];
	int MaxIndex = 0;
	for (int i = 1; i < 'Z' - 'A' + 1; ++i)
	{
		if (Alphabet[i] > MaxValue)
		{
			MaxValue = Alphabet[i];
			MaxIndex = i;
		}
	}

	for (int i = 1; i < 'Z' - 'A' + 1; ++i)
	{
		if ((Alphabet[i] == MaxValue) && (i != MaxIndex))
		{
			cout << '?';
			return 0;
		}
	}

	cout << char('A' + MaxIndex);

	return 0;
}