#include <bits/stdc++.h>
using namespace std;

int Cards[21];

void Reverse(int Start, int End)
{
	for (int i = 0; i < (End - Start + 1) / 2; ++i)
	{
		// <algorithm>ÀÇ swap ÇÔ¼ö
		swap(Cards[Start + i], Cards[End - i]);
	}
}

int main()
{
	for (int i = 1; i <= 20; ++i) Cards[i] = i;

	for (int i = 0; i < 10; ++i)
	{
		int Start, End;
		cin >> Start >> End;

		Reverse(Start, End);
	}

	for (int i = 1; i <= 20; ++i) cout << Cards[i] << ' ';

	return 0;
}