#include <bits/stdc++.h>
using namespace std;

int main()
{
				// ����, �ε���
	stack<pair<int, int>> s; // ž ����
	
	int n; 
	cin >> n;
	
	vector<int> nums(n); // �־��� ž �迭
	for (int i = 0; i < n; ++i)
	{
		cin >> nums[i];
	}

	s.push(make_pair(0, 0));

	for (int i = 0; i < n; ++i)
	{
		bool touch = false;
		while (!s.empty())
		{
			if (s.top().first < nums[i])
			{
				s.pop();
			}
			
			else if (s.top().first >= nums[i])
			{
				cout << s.top().second << ' ';
				touch = true;
				break;
			}
		}

		if (touch == false)
		{
			cout << 0 << ' ';
		}

		s.push(make_pair(nums[i], i + 1));
	}

	return 0;
}