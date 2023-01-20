#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		string a, b;
		cin >> a >> b;

		cout << "Distances: ";

		for (int i = 0; i < a.size(); ++i) {
			int d = b[i] - a[i];
			if (d < 0)
				d += 26;
			cout << d << ' ';
		}

		cout << '\n';
	}
}