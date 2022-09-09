#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> nums;
int freq[8001];
int maxfreq = 0;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		sum += x;
		nums.push_back(x);
		freq[x + 4000]++;
		maxfreq = max(maxfreq, freq[x + 4000]);
	}

	int avg = round(double(sum) / double(n));
	cout << avg << '\n';

	sort(nums.begin(), nums.end());
	cout << nums[n / 2] << '\n';

	vector<int> mode;
	for (int i = 0; i < 8001; ++i) {
		if (freq[i] == maxfreq) {
			mode.push_back(i - 4000);
		}
	}
	if (mode.size() > 1) {
		sort(mode.begin(), mode.end());
		cout << mode[1] << '\n';
	}
	else cout << mode[0] << '\n';

	cout << abs(nums[n - 1] - nums[0]) << '\n';

	return 0;
}