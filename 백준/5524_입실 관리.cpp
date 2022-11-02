#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n;
	cin >> n;
	int a = 97 - 65;

	for (int i = 0; i < n; ++i) {
		string str;
		cin >> str;

		for (auto e : str) {
			if (e < 'a') {
				cout << char(e + a);
			}
			else cout << char(e);
		}
		cout << '\n';
	}
}

