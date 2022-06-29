#include <bits/stdc++.h>
using namespace std;

int nums[10];

int main()
{
	int N;
	cin >> N;

	while (N > 0)
	{
		nums[N % 10]++;
		N /= 10;
	}

	int v = ceil((nums[6] + nums[9]) / 2.0);
	nums[6] = nums[9] = v;

	cout << *max_element(nums, nums + 10);

	return 0;
}