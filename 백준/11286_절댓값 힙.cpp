#include <bits/stdc++.h>
using namespace std;

class cmp {
public:
	bool operator()(int& a, int& b) {
		if (a != b) {
			if (abs(a) != abs(b)) {
				return abs(a) > abs(b);
			}
			return a > b;
		}
		return false;
	}
};

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n;
	cin >> n;
	priority_queue<int, vector<int>, cmp> pq;

	while (n--) {
		int x;
		cin >> x;

		if (x) {
			pq.push(x);
		}
		else {
			if (pq.empty()) {
				cout << 0 << '\n';
			}
			else {
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
	}
}

