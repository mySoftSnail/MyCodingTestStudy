#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	string a, b;
	cin >> a >> b;
	int len = a.size() > b.size() ? a.size() : b.size();

	while (a.size() < len) {
		a.insert(0, "0");
	}
	while (b.size() < len) {
		b.insert(0, "0");
	}

	string res;
	int u = 0;
	for (int i = len - 1; i >= 0; --i) {
		int x = (a[i] - '0') + (b[i] - '0') + u;
		int d = x % 10;
		u = x / 10;
		res.append(to_string(d));
	}
	if (u) res.append("1");

	reverse(res.begin(), res.end());
	cout << res;
}
