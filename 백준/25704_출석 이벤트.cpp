#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n, p;
	cin >> n >> p;

	int a, c;
	a = c = 0;

	double b, d;
	b = d = 1.0;

	if (n >= 5)
		a = 500;
	if (n >= 10)
		b = 0.9;
	if (n >= 15)
		c = 2000;
	if (n >= 20)
		d = 0.75;

	int ans = min(
		{
			p - a,
			int(p * b),
			p - c,
			int(p * d)
		}
	);

	if (ans < 0)
		cout << 0;
	else
		cout << ans;
}
