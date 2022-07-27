#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int origin = n;
	int cnt = 1;
	while (true) {
		int a = n / 10;
		int b = n % 10;
		int newnumber = b * 10 + (a + b) % 10;
		if (newnumber == origin) break;
		n = newnumber;
		cnt++;
	}

	cout << cnt;

	return 0;
}