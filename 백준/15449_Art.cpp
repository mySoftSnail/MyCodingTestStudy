#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> sticks(5);
	for (int i = 0; i < 5; ++i)
		cin >> sticks[i];
	sort(sticks.begin(), sticks.end());

	vector<int> permu{ 0,0,0,1,1 };

	int ans = 0;
	do {
		vector<int> tri;
		for (int i = 0; i < 5; ++i) 
			if (permu[i] == 0)
				tri.push_back(sticks[i]);

		if (tri[0] + tri[1] > tri[2])
			ans++;

	} while (next_permutation(permu.begin(), permu.end()));

	cout << ans;
}