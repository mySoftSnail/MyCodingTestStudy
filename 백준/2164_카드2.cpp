#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);

	queue<int> Q;

	int n; cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		Q.push(i);
	}

	while (Q.size() >= 2)
	{
		Q.pop();
		int tmp = Q.front();
		Q.pop();
		Q.push(tmp);
	}

	cout << Q.front();

	return 0;
}