#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	priority_queue<int> pq;
	int n;
	cin >> n;

	while (n--) {
		int x;
		cin >> x;
		if (x) {
			pq.push(x);
		}
		else {
			if (pq.empty()) cout << "0\n";
			else {
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
	}
}

