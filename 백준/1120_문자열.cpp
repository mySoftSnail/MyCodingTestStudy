#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string a, b;
	cin >> a >> b;
	
	int res = 55;
	
	for (int i = 0; i <= b.size() - a.size(); ++i) {
		string ma;
		for (int j = 0; j < i; ++j) ma += "*";
		ma += a;
		for (int j = i + a.size(); j <= b.size() - 1; ++j) ma += "*";

		int cnt = 0;
		for (int j = 0; j < b.size(); ++j) {
			if (ma[j] == '*') continue;
			if (ma[j] != b[j]) cnt++;
		}
		res = min(cnt, res);
	}

	cout << res;

	return 0;
}