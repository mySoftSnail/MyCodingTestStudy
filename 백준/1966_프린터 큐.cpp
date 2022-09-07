#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;

		deque<pair<int, bool>> dq;
		for (int i = 0; i < n; ++i) {
			int p;
			cin >> p;
			if (i == m) dq.push_back({ p,true });
			else dq.push_back({ p,false });
		}

		int cnt = 1;
		while (true) {
			bool tryagain = false;
			auto cur = dq.front();
			for (int i = 0; i < dq.size(); ++i) {
				if (cur.first < dq[i].first) {
					dq.pop_front();
					dq.push_back(cur);
					tryagain = true;
					break;
				}
			}

			if (!tryagain) {
				if (cur.second) {
					cout << cnt << '\n';
					break;
				}
				else cnt++;
				dq.pop_front();
			}
		}
	}

	return 0;
}