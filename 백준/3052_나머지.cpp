#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> ModSet;

	for (int i = 0; i < 10; ++i)
	{
		int n;
		cin >> n;
		ModSet.insert(n % 42);
	}

	cout << ModSet.size();

	return 0;
}