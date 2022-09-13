#include <bits/stdc++.h>
using namespace std;

int N, M;
queue<int> A, B;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> N >> M;

	for (int i = 0; i < N; ++i) {
		int x;
		cin >> x;
		A.push(x);
	}
	for (int i = 0; i < M; ++i) {
		int x;
		cin >> x;
		B.push(x);
	}

	vector<int> C;
	while (!A.empty() && !B.empty()) {
		int a = A.front();
		int b = B.front();
		if (a < b) {
			C.push_back(a);
			A.pop();
		}
		else {
			C.push_back(b);
			B.pop();
		}
	}

	while (!A.empty()) {
		C.push_back(A.front());
		A.pop();
	}

	while (!B.empty()) {
		C.push_back(B.front());
		B.pop();
	}

	for (auto e : C)
		cout << e << ' ';

	return 0;
}