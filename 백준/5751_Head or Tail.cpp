#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (true) {
		cin >> n;
		if (!n) break;
		
		int j = 0, m = 0;
		int x;
		while (n--) {
			cin >> x;
			if (x) j++;
			else m++;
		}
		cout << "Mary won " << m << " times and John won " << j << " times\n";
	}
}

