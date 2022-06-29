#include <bits/stdc++.h>
using namespace std;

int aoccur[26];
int boccur[26];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; ++i)
	{
		string a, b;
		cin >> a >> b;

		for (char c : a)
			aoccur[c - 'a']++;

		for (char c : b)
			boccur[c - 'a']++;

		bool possible = true;

		for (int i = 0; i < 26; ++i)
		{
			if (aoccur[i] != boccur[i])
				possible = false;
		}

		possible ? cout << "Possible\n" : cout << "Impossible\n";

		fill(aoccur, aoccur + 26, 0);
		fill(boccur, boccur + 26, 0);
	}

	return 0;
}