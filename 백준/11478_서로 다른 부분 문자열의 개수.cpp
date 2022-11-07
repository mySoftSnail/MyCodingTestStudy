#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	string str;
	unordered_set<string> s;
	cin >> str;

	int len = str.size();
	for (int i = 0; i <= len - 1; ++i) 
		for (int k = 1; k <= len; ++k) 
			s.insert(str.substr(i, k));

	cout << s.size();
}

