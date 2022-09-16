#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	while (N--) {
		string str;
		cin >> str;
		int a = 26 * 26 * (str[0] - 'A') + 26 * (str[1] - 'A') + (str[2] - 'A');
		int b = 1000 * (str[4] - '0') + 100 * (str[5] - '0') + 10 * (str[6] - '0') + (str[7] - '0');
		if (abs(a - b) <= 100) cout << "nice\n";
		else cout << "not nice\n";
	}

	return 0;
}