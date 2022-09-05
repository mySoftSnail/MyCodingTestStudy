#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
	if (a.second < b.second) return true;
	else if (a.second == b.second) 
		if (a.first < b.first) return true;
	
	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<pair<int, int>> v;
	while (n--) {
		int x, y;
		cin >> x >> y;
		v.push_back({ x,y });
	}

	sort(v.begin(), v.end(), comp);

	for (auto e : v)
		cout << e.first << ' ' << e.second << '\n';

	return 0;
}