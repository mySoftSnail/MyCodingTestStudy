#include <bits/stdc++.h>
using namespace std;

int cards[21];

int main()
{
	for (int i = 1; i <= 20; ++i) cards[i] = i;

	for (int i = 0; i < 10; ++i)
	{
		int start, end;
		cin >> start >> end;

		reverse(cards + start, cards + end + 1);
	}

	for (int i = 1; i <= 20; ++i) cout << cards[i] << ' ';

	return 0;
}