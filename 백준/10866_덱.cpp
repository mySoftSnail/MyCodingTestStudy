#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);

	deque<int> D;

	int n; cin >> n;
	string op;
	while (n--)
	{
		cin >> op;

		if (op == "push_front")
		{
			int x; cin >> x;
			D.push_front(x);
		}

		if (op == "push_back")
		{
			int x; cin >> x;
			D.push_back(x);
		}

		if (op == "pop_front")
		{
			if (D.empty() == false)
			{
				cout << D.front() << '\n';
				D.pop_front();
			}
			else cout << -1 << '\n';
		}

		if (op == "pop_back")
		{
			if (D.empty() == false)
			{
				cout << D.back() << '\n';
				D.pop_back();
			}
			else cout << -1 << '\n';
		}

		if (op == "size")
		{
			cout << D.size() << '\n';
		}

		if (op == "empty")
		{
			cout << D.empty() << '\n';
		}

		if (op == "front")
		{
			if (D.empty() == false)
			{
				cout << D.front() << '\n';
			}
			else cout << -1 << '\n';
		}

		if (op == "back")
		{
			if (D.empty() == false)
			{
				cout << D.back() << '\n';
			}
			else cout << -1 << '\n';
		}
	}

	return 0;
}