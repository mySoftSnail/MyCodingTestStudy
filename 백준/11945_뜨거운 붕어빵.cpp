#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n, m;
	cin >> n >> m;
	while (n--) {
		string str;
		cin >> str;
		reverse(str.begin(), str.end());
		cout << str << '\n';
	}
}