#include <bits/stdc++.h>
using namespace std;

int main()
{
	// ≥Ù¿Ã, ¿Œµ¶Ω∫
	stack<pair<int, int>> S;

	vector<int> V;

	int N; cin >> N;
	for (int i = 0; i < N; ++i)
	{
		int x; 
		cin >> x;
		V.push_back(x);
	}

	S.push(make_pair(0, -1));

	for (int i = 0; i < N; ++i)
	{
		bool Z = false;

		while (!S.empty())
		{
			if (S.top().first < V[i])
			{
				S.pop();
			}
			else if (S.top().first >= V[i])
			{
				cout << S.top().second << ' ';

				Z = true;
				break;
			}
		}

		S.push(make_pair(V[i], i + 1));
		
		if (!Z) cout << 0 << ' ';
	}

	return 0;
}