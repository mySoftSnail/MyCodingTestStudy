#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	unordered_set<string> s;
	int n;
	cin >> n;
	while (n--) {
		string name, log;
		cin >> name >> log;

		if (log == "enter")
			s.insert(name);
		else
			s.erase(name);
	}

	vector<string> v(s.begin(), s.end());
	sort(v.begin(), v.end(), greater<string>());
	for (auto s : v)
		cout << s << '\n';
}