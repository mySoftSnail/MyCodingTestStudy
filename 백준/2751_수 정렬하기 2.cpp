#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;

	cin >> N;

	vector<int> Numbers;

	for (int i = 0; i < N; ++i)
	{
		int Value;
		cin >> Value;
		Numbers.push_back(Value);
	}

	sort(Numbers.begin(), Numbers.end());

	for (auto it : Numbers)
	{
		cout << it << '\n';
	}

	return 0;
}