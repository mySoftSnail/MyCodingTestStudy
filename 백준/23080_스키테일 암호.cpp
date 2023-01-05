#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int k;
	string s;
	cin >> k >> s;

	for (int i = 0; i <= s.size() - 1; i += k) 
		cout << s[i];
}