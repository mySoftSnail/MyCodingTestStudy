#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);

	int K; cin >> K;

	stack<int> S;
	while (K--)
	{
		int N;
		cin >> N;

		if (N == 0) S.pop();
		else S.push(N);
	}

	int size = S.size();
	long long res = 0;
	for (int i = 0; i < size; ++i)
	{
		res += S.top();
		S.pop();
	}
	
	cout << res << '\n';

	return 0;
}