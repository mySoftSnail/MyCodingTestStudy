#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int Length;
	string HashString;
	cin >> Length >> HashString;

	vector<long long> rMods;

	int R = 1;
	int M = 1234567891;
	for (int i = 0; i < 50; ++i)
	{
		long long Temp = R % M;
		rMods.push_back(Temp);
		R = (31 * Temp) % M;
	}

	long long Result = 0;
	for (int i = 0; i < Length; ++i)
	{
		long long CharHash = ((HashString[i] - 'a' + 1) * rMods[i]) % M;
		Result += CharHash;
	}

	Result %= M;

	cout << Result;

	return 0;
}