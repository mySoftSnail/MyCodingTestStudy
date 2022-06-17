#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <time.h>
using namespace std;

void SetFunction()
{
	set<int> ModSet;

	for (int i = 0; i < 10000000; ++i)
	{
		ModSet.insert(i % 42);
	}

	cout << ModSet.size() << '\n';
}

void VectorFunction()
{
	vector<int> ModVector;

	for (int i = 0; i < 10000000; ++i)
	{
		ModVector.push_back(i % 42);
	}

	sort(ModVector.begin(), ModVector.end());

	ModVector.erase(unique(ModVector.begin(), ModVector.end()), ModVector.end());

	cout << ModVector.size() << '\n';
}

int main()
{
	clock_t start, end;
	double result;

	start = clock();

	SetFunction();

	end = clock();
	result = (double)(end - start);
	cout << "수행 시간(Set): " << result << " millisecond" << '\n';

	////////////////////////////////////////

	start = clock();

	VectorFunction();

	end = clock();
	result = (double)(end - start);
	cout << "수행 시간(Vector): " << result << " millisecond" << '\n';

	return 0;
}