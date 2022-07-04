#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	deque<int> DQ;

	int n, m; cin >> n >> m;

	for (int i = 1; i <= n; ++i) DQ.push_back(i);

	int cnt = 0;

	while (m--) {
		int x; cin >> x;
		int idx = find(DQ.begin(), DQ.end(), x) - DQ.begin();

		while (DQ.front() != x) {
			if (idx < DQ.size() - idx) {
				DQ.push_back(DQ.front());
				DQ.pop_front();
			}
			else {
				DQ.push_front(DQ.back());
				DQ.pop_back();
			}
			cnt++;
		}
		
		DQ.pop_front();
	}

	cout << cnt;

	return 0;
}