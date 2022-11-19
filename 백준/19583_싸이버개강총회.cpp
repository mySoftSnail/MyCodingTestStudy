#include <bits/stdc++.h>
using namespace std;

int to_min(string time) {
	string h = time.substr(0, 2);
	int min = 60 * stoi(h);
	return min + stoi(time.substr(3, 2));
}

int main() {
	cin.tie(0)->sync_with_stdio(0);

	string s, e, q;
	cin >> s >> e >> q;

	int start = to_min(s);
	int end = to_min(e);
	int quit = to_min(q);

	unordered_set<string> enter, leave;
	string time, name;
	while (!cin.eof()) {
		cin >> time >> name;

		int t = to_min(time);
		if (t <= start)
			enter.insert(name);
		if (end <= t && t <= quit)
			leave.insert(name);
	}

	int ans = 0;
	for (auto e : enter) {
		if (leave.find(e) != leave.end())
			ans++;
	}
	cout << ans;
}