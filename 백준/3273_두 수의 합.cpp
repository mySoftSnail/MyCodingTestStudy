#include <bits/stdc++.h>
using namespace std;

int occur[1'000'001]; 

int main()
{
	int n, x;
	cin >> n;

	vector<int> seq;

	for (int i = 0; i < n; ++i)
	{
		int v;
		cin >> v;
		seq.push_back(v);
		occur[v] = 1;
	}

	cin >> x;

	int cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		int idx = x - seq[i];
		if (idx >= 0 && idx <= 1'000'000)
		{
			if (occur[idx] == 1) 
				cnt++;
		}
	}

	cout << cnt / 2;

	return 0;
}