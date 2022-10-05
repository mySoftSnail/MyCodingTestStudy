#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<int, int>> v;

bool comp(const pair<int, int> &a, const pair<int, int> &b) {
	if (a.second == b.second) {
		if (a.first < b.first) return true;
	}
	if (a.second < b.second) return true;
	else return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i) {
		int st, en;
		cin >> st >> en;
		v.push_back({ st,en });
	}

	sort(v.begin(), v.end(), comp);

	int ans = 0;
	int start = -1, end = -1;

	for (const auto& e : v) {
		if (e.first >= end) {
			start = e.first;
			end = e.second;
			ans++;
		}
	}

	cout << ans;
}
