#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> ng, ps;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		if (x > 0) ps.push_back(x);
		else ng.push_back(x);
	}

	sort(ng.begin(), ng.end());
	sort(ps.begin(), ps.end(), greater<int>());

	int ans = 0;

	while (ng.size() >= 2) {
		ans += ng[0] * ng[1];
		ng.erase(ng.begin());
		ng.erase(ng.begin());
	}
	if (ng.size() > 0) 
		for (auto e : ng)
			ans += e;
	
	while (ps.size() >= 2) {
		if (ps[0] * ps[1] <= ps[0]) {
			ans += ps[0];
			ps.erase(ps.begin());
			continue;
		}
		ans += ps[0] * ps[1];
		ps.erase(ps.begin());
		ps.erase(ps.begin());
	}
	if (ps.size() > 0) 
		for (auto e : ps)
			ans += e;

	cout << ans;
}

