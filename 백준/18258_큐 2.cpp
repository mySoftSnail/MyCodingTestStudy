#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);

	queue<int> Q;

	int n; cin >> n;
	string op;

	while (n--)
	{
		cin >> op;

		if (op == "push")
		{
			int x; cin >> x;
			Q.push(x);
		}

		if (op == "pop")
		{
			if (Q.empty() == false)
			{
				cout << Q.front() << '\n';
				Q.pop();
			}
			else
			{
				cout << -1 << '\n';
			}
		}

		if (op == "size")
		{
			cout << Q.size() << '\n';
		}

		if (op == "empty")
		{
			cout << Q.empty() << '\n';
		}

		if (op == "front")
		{
			if (Q.empty() == false)
			{
				cout << Q.front() << '\n';
			}
			else
			{
				cout << -1 << '\n';
			}
		}

		if (op == "back")
		{
			if (Q.empty() == false)
			{
				cout << Q.back() << '\n';
			}
			else
			{
				cout << -1 << '\n';
			}
		}
	}

	return 0;
}