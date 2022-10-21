#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int e, s, m;
	cin >> e >> s >> m;
	e--, s--, m--;

	int i = e;
	while (i % 28 != s) i += 15;

	int l = lcm(15, 28);
	while (i % 19 != m) i += l;
	cout << i + 1;
}

