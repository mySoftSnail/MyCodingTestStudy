#include <bits/stdc++.h>
using namespace std;

const int MX = 100005;
int dat[MX];
int head = 0, tail = 0;

void push(int x)
{
	dat[tail++] = x;
}

void pop()
{
	head++;
}

int size()
{
	return tail - head;
}

bool empty()
{
	if (size() <= 0) return true;
	else return false;
}

int front()
{
	return dat[head];
}

int back()
{
	return dat[tail - 1];
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	string op;
	while (n--)
	{
		cin >> op;

		if (op == "push")
		{
			int x; cin >> x;
			push(x);
		}
		if (op == "pop")
		{
			if (empty() == false)
			{
				cout << front() << '\n';
				pop();
			}
			else
			{
				cout << -1 << '\n';
			}
		}
		if (op == "size")
		{
			cout << size() << '\n';
		}
		if (op == "empty")
		{
			empty() ? cout << 1 << '\n' : cout << 0 << '\n';
		}
		if (op == "front")
		{
			if (empty() == false)
			{
				cout << front() << '\n';
			}
			else
			{
				cout << -1 << '\n';
			}
		}
		if (op == "back")
		{
			if (empty() == false)
			{
				cout << back() << '\n';
			}
			else
			{
				cout << -1 << '\n';
			}
		}
	}

	return 0;
}