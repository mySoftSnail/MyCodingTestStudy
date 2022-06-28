#include <bits/stdc++.h>
using namespace std;

void SwapCard(int Cards[], int IndexOne, int IndexTwo)
{
	int Temp = Cards[IndexOne];
	Cards[IndexOne] = Cards[IndexTwo];
	Cards[IndexTwo] = Temp;
}

int main()
{
	int Cards[21] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	
	for (int i = 0; i < 10; ++i)
	{
		int Start, End;
		cin >> Start >> End;

		while (Start < End)
		{
			SwapCard(Cards, Start, End);
			Start++;
			End--;
		}
	}

	for (int i = 1; i <= 20; ++i)
		cout << Cards[i] << ' ';

	return 0;
}