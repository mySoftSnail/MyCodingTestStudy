#include <bits/stdc++.h>
using namespace std;

int t;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> t;
	while (t--) {
		int k;
		cin >> k;
		multiset<int> ms;
		for (int i = 0; i < k; ++i) {
			char op;
			int n;
			cin >> op >> n;
			if (op == 'I')
				ms.insert(n);
			if (op == 'D') {
				if (ms.empty()) continue;
				if (n == 1) { // 최댓값 삭제
					auto it = prev(ms.end());
					ms.erase(it);
				}
				if (n == -1) { // 최소값 삭제
					auto it = ms.begin();
					ms.erase(it);
				}
			}
		}

		if (ms.empty())
			cout << "EMPTY\n";
		else 
			cout << *prev(ms.end()) << ' ' << *ms.begin() << '\n';
	}
}