#include <bits/stdc++.h>
using namespace std;

string input[55];

bool comp(string a, string b) {
	return a.size() > b.size();
}

bool isPrefix(string str, string s) {
	for (int i = 0; i < str.size(); ++i) {
		if (str[i] != s[i]) return false;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> input[i];

	sort(input, input + n, comp);

	set<string> ss;

	for (int i = 0; i < n; ++i) {
		bool flag = false;
		for (auto s : ss) {
			if (isPrefix(input[i], s)) {
				flag = true;
				break;
			}
		}
		if (flag) continue;
		ss.insert(input[i]);
	}

	cout << ss.size();

	return 0;
}