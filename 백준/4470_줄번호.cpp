#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n;
	cin >> n;
	cin.ignore(1);
	for (int i = 1; i <= n; ++i) {
		string str;
		getline(cin, str);
		cout << i << ". " << str << '\n';
	}
}

