#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int a, b, c, d;
	int x, y, z, w;

	cin >> a >> b >> c >> d >> x >> y >> z >> w;

	int k = a + b + c + d;
	int s = x + y + z + w;

	cout << max(k, s);
}