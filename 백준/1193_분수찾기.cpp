#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;

	int line = 1;
	int up = 0;
	while (x - line > 0) {
		x -= line;
		line++;
		up = 1 - up;
	}


	int a, b;
	if (up) {
		a = x;
		b = line + 1 - x;
	}
	else {
		a = line + 1 - x;
		b = x;
	}
	cout << a << '/' << b;

	return 0;
}