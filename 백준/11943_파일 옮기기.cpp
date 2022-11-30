#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int x = a + d;
	int y = b + c;

	cout << min(x, y);
}

