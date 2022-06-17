#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);

	int Length = str.size();
	int NumOfSpace = 0;

	for (int i = 0; i < Length; ++i)
	{
		if (str[i] == ' ')
		{
			NumOfSpace++;
		}
	}

	if (str[0] == ' ') NumOfSpace--;
	if (str[Length - 1] == ' ') NumOfSpace--;

	cout << NumOfSpace + 1;

	return 0;
}