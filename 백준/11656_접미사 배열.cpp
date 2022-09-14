#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;

	vector<string> v;
	for (int i = 0; i < s.size(); ++i) {
		string substr = s.substr(i, s.size());
		v.push_back(substr);
	}

	sort(v.begin(), v.end());

	for (auto e : v)
		cout << e << '\n';

	return 0;
}