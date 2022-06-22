#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int OneToMan[10000] = { 0 }; // OneToMan[0]은 입력된 1의 개수, OneToMan[1]은 입력된 2의 개수, ... OneToMan[9999]는 입력된 10000의 개수

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