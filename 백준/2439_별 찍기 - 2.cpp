#include <iostream>
using namespace std;

void PrintSpace(int Count)
{
	for (int i = 0; i < Count; ++i)
	{
		cout << ' ';
	}
}

void PrintStar(int Count)
{
	for (int i = 0; i < Count; ++i)
	{
		cout << '*';
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int NumOfSpace = n - 1;
	int NumOfStar = 1;

	while(NumOfSpace >= 0)
	{
		PrintSpace(NumOfSpace);
		PrintStar(NumOfStar);
		cout << '\n';

		NumOfSpace--;
		NumOfStar++;
	}

	return 0;
}