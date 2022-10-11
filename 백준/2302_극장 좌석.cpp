#include <bits/stdc++.h>
using namespace std;

int n, m;
int d[45]; // d[i]: 연속된 i개의 좌석에 앉을 수 있는 경우의 수
vector<int> v = { 0 }; // 0번 좌석, 고정석, N+1번 좌석

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	v.push_back(n + 1); // 좌석의 끝

	d[0] = 1; // length가 0일 수 있다
	d[1] = 1;
	d[2] = 2;
	for (int i = 3; i <= n; ++i) 
		d[i] = d[i - 1] + d[i - 2];
	
	int ans = 1;
	for (int i = 1; i < v.size(); ++i) {
		int length = v[i] - v[i - 1] - 1;
		ans *= d[length];
	}

	cout << ans;
}

