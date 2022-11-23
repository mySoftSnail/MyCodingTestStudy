#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n, q;
	cin >> n >> q;

	set<int> s;
	for (int i = 1; i <= n; ++i) {
		int x;
		cin >> x;
		if (x)
			s.insert(i);
	}
	
	int loc = 1;

	while (q--) {
		int query;
		cin >> query;
		if (query == 1) {
			int x;
			cin >> x;
			auto it = s.find(x);
			if (it != s.end())
				s.erase(it);
			else
				s.insert(x);
		}
		if (query == 2) {
			int x;
			cin >> x;
			loc = (loc + x) % n;
			if (!loc) loc = n;
		}
		if (query == 3) {
			if (s.empty()) {
				cout << "-1\n";
			}
			else { // loc에서 가장 가까운 명소 찾기
				auto it = s.lower_bound(loc);
				if (it != s.end()) 
					cout << *it - loc << '\n';
				else 
					cout << n - loc + *s.begin() << '\n';
			}
		}
	}
}