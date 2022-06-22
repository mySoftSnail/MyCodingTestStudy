#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int OneToMan[10000] = { 0 }; // OneToMan[0]�� �Էµ� 1�� ����, OneToMan[1]�� �Էµ� 2�� ����, ... OneToMan[9999]�� �Էµ� 10000�� ����

	int N;
	cin >> N;

	int Value;
	for (int i = 0; i < N; ++i)
	{
		cin >> Value;
		OneToMan[Value - 1]++;
	}

	for (int i = 0; i < 10000; ++i)
	{
		int Count = OneToMan[i];
		for (int j = 0; j < Count; ++j)
		{
			cout << i + 1 << '\n';
		}
	}

	return 0;
}