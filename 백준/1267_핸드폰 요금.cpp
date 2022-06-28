#include <bits/stdc++.h>
using namespace std;

int phone[10000];

int main()
{
	int N;
	cin >> N;

	int Y, M;
	Y = M = 0;

	for (int i = 0; i < N; ++i) cin >> phone[i];

	for (int i = 0; i < N; ++i)
	{
		Y += ((phone[i] / 30) + 1) * 10;
		M += ((phone[i] / 60) + 1) * 15;
	}

	if (Y > M) cout << "M " << M;
	else if (Y < M) cout << "Y " << Y;
	else cout << "Y M " << Y;

	return 0;
}