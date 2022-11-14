#include <bits/stdc++.h>
using namespace std;

int a, b, c, x, y;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> a >> b >> c >> x >> y;

	cout << min({ a,b,c }) + min(x, y) - 50;

}

