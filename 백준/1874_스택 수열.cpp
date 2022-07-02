#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n; 
	cin >> n;

	vector<int> v;	// 입력된 수열
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}

	stack<int> a;	
	for (int i = n; i >= 1; --i)
		a.push(i);	// (top) 1 2 3 4 5 6 7 8

	stack<int> b;

	vector<char> res;

	for (int i = 0; i < n; ++i)
	{
		if (!b.empty() && b.top() > v[i])
		{
			cout << "NO\n";
			return 0;
		}

		while (b.empty() || b.top() < v[i])
		{
			res.push_back('+');
			b.push(a.top());
			a.pop();
		}

		if (v[i] == b.top())
		{
			res.push_back('-');
			b.pop();
		}
	}

	for (auto c : res)
		cout << c << '\n';

	return 0;
}