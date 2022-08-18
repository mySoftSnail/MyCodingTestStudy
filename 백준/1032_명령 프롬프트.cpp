#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	string str;
	cin >> str;

	for (int i = 0; i < n - 1; ++i) {
		string tmp;
		cin >> tmp;
		for (int j = 0; j < str.size(); ++j) {
			if (tmp[j] != str[j]) {
				str[j] = '?';
			}
		}
	}

	cout << str;

	return 0;
}