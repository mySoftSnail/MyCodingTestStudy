#include <bits/stdc++.h>
using namespace std;

const int MX = 20005;
int dat[2 * MX + 1];
int head = MX, tail = MX;

void push_front(int x) {
	dat[--head] = x;
}

void push_back(int x) {
	dat[tail++] = x;
}

void pop_front() {
	head++;
}

void pop_back() {
	tail--;
}

int front() {
	return dat[head];
}

int back() {
	return dat[tail - 1];
}

int size()
{
	return tail - head;
}

bool empty()
{
	return size() == 0;
}


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	string op;
	while (n--)
	{
		cin >> op;

		if (op == "push_front")
		{
			int x; cin >> x;
			push_front(x);
		}

		if (op == "push_back")
		{
			int x; cin >> x;
			push_back(x);
		}

		if (op == "pop_front")
		{
			if (empty() == false)
			{
				cout << front() << '\n';
				pop_front();
			}
			else cout << -1 << '\n';
		}

		if (op == "pop_back")
		{
			if (empty() == false)
			{
				cout << back() << '\n';
				pop_back();
			}
			else cout << -1 << '\n';
		}

		if (op == "size")
		{
			cout << size() << '\n';
		}

		if (op == "empty")
		{
			cout << empty() << '\n';
		}

		if (op == "front")
		{
			if (empty() == false)
			{
				cout << front() << '\n';
			}
			else cout << -1 << '\n';
		}

		if (op == "back")
		{
			if (empty() == false)
			{
				cout << back() << '\n';
			}
			else cout << -1 << '\n';
		}
	}

	return 0;
}