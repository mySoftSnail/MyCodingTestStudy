#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n;
	cin >> n;

	priority_queue<int, vector<int>, greater<int>> pq; // �ּ� ��

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

�켱���� ť�� ū �� N���� ������ �ִ´�.

*/