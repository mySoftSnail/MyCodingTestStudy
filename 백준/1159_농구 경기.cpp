#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	vector<string> v;
	for (int i = 0; i < n; ++i) {
		string str;
		cin >> str;
		v.push_back(str);
	}

	bool predaja = true;
	for (char c = 'a'; c <= 'z'; ++c) {
		int cnt = 0;
		for (int i = 0; i < n; ++i) {
			if (v[i][0] == c) cnt++;
			if (cnt >= 5) {
				cout << c;
				predaja = false;
				break;
			}
		}
	}

	if (predaja)
		cout << "PREDAJA";
}

