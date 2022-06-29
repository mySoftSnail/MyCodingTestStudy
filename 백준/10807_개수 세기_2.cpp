#include <bits/stdc++.h>
using namespace std;

int occur[201];

int main()
{
	int N; cin >> N;
	for (int i = 0; i < N; ++i)
	{
		int v;
		cin >> v;
		occur[v + 101]++;
	}

	int v;
	cin >> v;
	cout << occur[v + 101];

	return 0;
}