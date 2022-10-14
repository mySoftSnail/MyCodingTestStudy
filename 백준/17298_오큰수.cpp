#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000003], o[1000003];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	fill(o, o + n, -1);

	stack<int> s;
	s.push(a[n - 1]);

	for (int i = n - 2; i >= 0; i--) {
		while (!s.empty()) {
			if (s.top() > a[i]) {
				o[i] = s.top();
				break;
			}
			else s.pop();
		}
		s.push(a[i]);
	}

	for (int i = 0; i < n; ++i)
		cout << o[i] << ' ';
}