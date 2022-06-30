#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);

	int t; cin >> t;
	while (t--)
	{
		list<char> L;
		auto cur = L.begin();

		string str; cin >> str;

		for (auto c : str)
		{
			if (c == '<')
			{
				if (cur != L.begin())
				{
					cur--;
				}
			}
			else if (c == '>')
			{
				if (cur != L.end())
				{
					cur++;
				}
			}
			else if (c == '-')
			{
				if (cur != L.begin())
				{
					cur--;
					cur = L.erase(cur);
				}
			}
			else
			{
				L.insert(cur, c);
			}
		}

		for (char c : L)
		{
			cout << c;
		}
		
		cout << '\n';
	}

	return 0;
}