#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n;
	cin >> n;

	priority_queue<int, vector<int>, greater<int>> pq; // 최소 힙

	for (int i = 0; i < n * n; ++i) {
		int x;
		cin >> x;
		pq.push(x);

		if ((int)pq.size() > n)
			pq.pop();
	}

	cout << pq.top();
}

/*

우선순위 큐에 큰 값 N개만 가지고 있는다.

*/