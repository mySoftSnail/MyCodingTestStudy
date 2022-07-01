#include <bits/stdc++.h>
using namespace std;

int S[10005];
int pos = 0;

void push(int x)
{
	S[pos++] = x;
}

void pop()
{
	if (pos == 0) cout << -1 << '\n';
	else
	{
		cout << S[pos - 1] << '\n';
		pos--;
	}
}

void size()
{
	cout << pos << '\n';
}

void empty()
{
	if (pos == 0) cout << 1 << '\n';
	else cout << 0 << '\n';
}

void top()
{
	if (pos == 0) cout << -1 << '\n';
	else
	{
		cout << S[pos - 1] << '\n';
	}
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);

	int N; cin >> N;
	while(N--)
	{
		string op; cin >> op;

		if (op == "push")
		{
			int x; cin >> x;
			push(x);
		}
		else if (op == "pop")
		{
			pop();
		}
		else if (op == "size")
		{
			size();
		}
		else if (op == "empty")
		{
			empty();
		}
		else if (op == "top")
		{
			top();
		}
	}

	return 0;
}