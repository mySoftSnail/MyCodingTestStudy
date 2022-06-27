#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> nums(3);
	
	cin >> nums[0] >> nums[1] >> nums[2];
	sort(nums.begin(), nums.end());

	for (int i : nums)
		cout << i << ' ';

	return 0;
}