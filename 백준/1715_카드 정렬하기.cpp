#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n;// = 100000;
	cin >> n;
	priority_queue<int, vector<int>, greater<int>> pq;
	while (n--) {
		int x;
		cin >> x;
		//x = 1000;
		pq.push(x);
	}

	int ans = 0;
	while (pq.size() > 1) {

		int a = pq.top();
		pq.pop();
		int b = pq.top();
		pq.pop();
		ans += (a + b);
		pq.push(a + b);
	}

	cout << ans;
}

