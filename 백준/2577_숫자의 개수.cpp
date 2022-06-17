#include <iostream>
#include <string>
using namespace std;

int main()
{
	int A, B, C;

	cin >> A >> B >> C;

	int M = A * B * C;

	string str = to_string(M);

	int Length = str.size();

	for (int i = 0; i <= 9; ++i)
	{
		int Count = 0;
		for (int j = 0; j < Length; ++j)
		{
			if (i + '0' == str[j]) Count++;
		}
		cout << Count << '\n';
	}

	return 0;
}