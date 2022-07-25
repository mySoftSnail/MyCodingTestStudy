#include <bits/stdc++.h>
using namespace std;

int paper[70][70];

bool check(int r, int c, int n) {
	bool same = true;
	for (int i = r; i < r + n; ++i) {
		for (int j = c; j < c + n; ++j) {
			if (paper[r][c] != paper[i][j]) {
				same = false;
				break;
			}
		}
		if (!same) break;
	}

	if (same) {
		cout << paper[r][c];
		return true;
	}
	return false;
}

void func(int r, int c, int n) {
	if (check(r, c, n)) return;

	int d2 = n / 2;

	cout << '(';
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) {
			func(r + i * d2, c + j * d2, d2);
		}
	}
	cout << ')';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	cin.ignore(1);
	
	string str;
	for (int i = 0; i < n; ++i) {
		getline(cin, str);
		for (int j = 0; j < str.size(); ++j) {
			paper[i][j] = str[j] - '0';
		}
	}

	func(0, 0, n);

	return 0;
}