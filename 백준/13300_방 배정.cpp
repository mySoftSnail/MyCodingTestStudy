#include <bits/stdc++.h>
using namespace std;

int table[13];

int main()
{
	int N, K, S, Y;
	cin >> N >> K;

	for (int i = 0; i < N; ++i)
	{
		cin >> S >> Y;
		table[6 * S + Y]++;
	}

	int cnt = 0;

	for (int i = 1; i <= 12; ++i)
	{
		cnt += ceil(table[i] / (double)K);
	}

	cout << cnt;

	return 0;
}