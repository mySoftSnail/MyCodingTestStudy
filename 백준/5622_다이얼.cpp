#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;

	int res = 0;
	for (char c : str) {
		int n;
		if (c <= 'C') n = 3;
		else if (c <= 'F') n = 4;
		else if (c <= 'I') n = 5;
		else if (c <= 'L') n = 6;
		else if (c <= 'O') n = 7;
		else if (c <= 'S') n= 8;
		else if (c <= 'V') n= 9;
		else if (c <= 'Z') n= 10;
		res += n;
	}

	cout << res;

	return 0;
}