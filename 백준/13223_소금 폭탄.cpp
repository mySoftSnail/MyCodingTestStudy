#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	string str1, str2;
	cin >> str1 >> str2;

	int start = stoi(str1.substr(0, 2)) * 3600 + stoi(str1.substr(3, 2)) * 60 + stoi(str1.substr(6, 2));
	int end = stoi(str2.substr(0, 2)) * 3600 + stoi(str2.substr(3, 2)) * 60 + stoi(str2.substr(6, 2));

	if (start >= end)
		end += 24 * 3600;
	int ans = end - start;

	int h = ans / 3600;
	int m = (ans % 3600) / 60;
	int s = ans % 60;

	if (h < 10) cout << 0 << h;
	else cout << h;
	cout << ':';
	if (m < 10) cout << 0 << m;
	else cout << m;
	cout << ':';
	if (s < 10) cout << 0 << s;
	else cout << s;
}
