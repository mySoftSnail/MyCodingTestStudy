#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int scenario = 1;
	int o, w;

	while (1) {
		cin >> o >> w;
		if (!o && !w) break;

		char op;
		bool dead = false;
		while (1) {
			cin >> op;
			if (op != '#') {
				if (dead) continue;
				switch (op) {
				case 'E':
					int n;
					cin >> n;
					w -= n;
					break;
				case 'F':
					int feed;
					cin >> feed;
					w += feed;
					break;
				}
			}
			else {
				cin >> op;
				break;
			}

			if (w <= 0) dead = true;
		}

		cout << scenario << ' ';
		scenario++;
		if (w > 0.5 * (double)o && w < 2 * o) {
			cout << ":-)" << '\n';
		}
		else if (w <= 0) {
			cout << "RIP" << '\n';
		}
		else {
			cout << ":-(" << '\n';
		}
	}

}

