#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N; cin >> N;

	for (int i = N - 1; i > 0; i--) // 4 3 2 1
	{
		for (int j = 0; j < N - i - 1; ++j) cout << ' ';
		for (int j = N - i; j < N + i + 1; ++j) cout << '*';
		cout << '\n';
	}

	for (int i = 1; i <= N; ++i)
	{
		if (i == N) cout << '*';
		else cout << ' ';
	}
	cout << '\n';

	for (int i = 1; i < N; i++) // 1 2 3 4
	{
		for (int j = 0; j < N - i - 1; ++j) cout << ' ';
		for (int j = N - i; j < N + i + 1; ++j) cout << '*';
		cout << '\n';
	}

	return 0;
}