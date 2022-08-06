#include <bits/stdc++.h>
using namespace std;

int l, c;
char alpha[20];
bool isUsed[20];
char ans[20];

void func(int k) {
	if (k == l) {
		int aeiou = 0;
		int abcdf = 0;
		for (int i = 0; i < l; ++i) {
			if ((ans[i] == 'a') || (ans[i] == 'e') || (ans[i] == 'i') || (ans[i] == 'o') || (ans[i] == 'u')) aeiou++;
			else abcdf++;
		}

		if ((aeiou >=1) && (abcdf >= 2)) {
			for (int i = 0; i < l; ++i) {
				cout << ans[i];
			}
			cout << '\n';
		}
		return;
	}

	char pre = 0;
	if (k != 0) pre = ans[k - 1];

	for (int i = 0; i < c; ++i) {
		if ((!isUsed[i]) && (alpha[i] > pre)) {
			isUsed[i] = true;
			ans[k] = alpha[i];
			func(k + 1);
			isUsed[i] = false;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> l >> c;

	for (int i = 0; i < c; ++i)
		cin >> alpha[i];

	sort(alpha, alpha + c);

	func(0);

	return 0;
}