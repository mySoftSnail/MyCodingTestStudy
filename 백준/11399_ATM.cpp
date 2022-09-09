#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> times;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;

	for (int i = 0; i < N; ++i) {
		int t;
		cin >> t;
		times.push_back(t);
	}

	sort(times.begin(), times.end());

	vector<int> subsum;
	int ans = 0;
	for (const auto& t : times) {
		ans += t;
		subsum.push_back(ans);
	}

	ans = 0;
	for (const auto& s : subsum)
		ans += s;
	cout << ans;

	return 0;
}