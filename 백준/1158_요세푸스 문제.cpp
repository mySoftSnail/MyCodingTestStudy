#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);

	int N, K; cin >> N >> K;

	list<int> L;

	for (int i = 1; i <= N; ++i)
	{
		L.push_back(i);
	}

	list<int>::iterator it = L.begin();
	vector<int> output;

	if (L.size() == 1)
	{
		cout << '<' << *L.begin() << '>';
		return 0;
	}

	while (L.size() > 0)
	{
		for (int i = 0; i < K - 1; ++i)
		{
			if (it == L.end()) it = L.begin();
			++it;
			if (it == L.end()) it = L.begin();
		}

		output.push_back(*it);
		it = L.erase(it);
	}

	int len = output.size();
	cout << '<' << output[0] << ", ";
	for (int i = 1; i < len - 1; ++i)
		cout << output[i] << ", ";
	cout << output[len - 1] << ">";

	return 0;
}