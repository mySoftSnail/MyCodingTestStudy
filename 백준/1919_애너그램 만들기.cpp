#include <bits/stdc++.h>
using namespace std;

int aoccur[26];
int boccur[26];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string a, b;
	cin >> a >> b;

	for (char c : a)
		aoccur[c - 'a']++;

	for (char c : b)
		boccur[c - 'a']++;

	int cnt = 0;
	for (int i = 0; i < 26; ++i)
	{
		if (aoccur[i] != boccur[i])
		{
			cnt += abs(aoccur[i] - boccur[i]);
		}
	}

	cout << cnt;

	return 0;
}