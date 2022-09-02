#include <bits/stdc++.h>
using namespace std;

string students[1002];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> students[i];

	int len = students[0].length();

	int k;
	for (k = 1; k <= len; ++k) {
		set<string> strset;
		for (int i = 0; i < n; ++i) {
			string subs = students[i].substr(len - k, k);
			strset.insert(subs);
		}
		if (strset.size() == n) {
			cout << k;
			return 0;
		}
	}
}