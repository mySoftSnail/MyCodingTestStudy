#include <bits/stdc++.h>
using namespace std;

int n, m;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	set<pair<int, int>> s;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		int num, lev;
		cin >> num >> lev;
		s.insert({ lev, num });
	}

	cin >> m;
	for (int i = 0; i < m; ++i) {
		string op;
		cin >> op;

		if (op == "add") {
			int num, lev;
			cin >> num >> lev;

			for (int l = 1; l <= 100; ++l) {
				auto it = s.find({ l,num });
				if (it != s.end()) {
					s.erase(it);
					break;
				}
			}
			s.insert({ lev,num });
		}

		if (op == "recommend") {
			int x;
			cin >> x;
			if (x == 1) {
				cout << (*prev(s.end())).second << '\n';
			}
			else {
				cout << (*s.begin()).second << '\n';
			}
		}

		if (op == "solved") {
			int num;
			cin >> num;
			for (int l = 1; l <= 100; ++l) {
				auto it = s.find({ l,num });
				if (it != s.end()) {
					s.erase(it);
					break;
				}
			}
		}
	}
}

