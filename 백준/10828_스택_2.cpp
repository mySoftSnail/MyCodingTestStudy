// STL stack으로 풀기
#include <bits/stdc++.h>
using namespace std;

int main()
{
	stack<int> S;

	int N; cin >> N;

	string op;
	while (N--)
	{
		cin >> op;

		if (op == "push")
		{
			int x; cin >> x;
			S.push(x);
		}
		if (op == "pop")
		{
			if (S.empty()) cout << -1 << '\n';
			else
			{
				cout << S.top() << '\n';
				S.pop();
			}
		}
		if (op == "size")
		{
			cout << S.size() << '\n';
		}
		if (op == "empty")
		{
			S.empty() ? cout << 1 << '\n' : cout << 0 << '\n';
		}
		if (op == "top")
		{
			if (S.empty()) cout << -1 << '\n';
			else cout << S.top() << '\n';
		}
	}

	return 0;
}