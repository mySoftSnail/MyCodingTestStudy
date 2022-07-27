#include <bits/stdc++.h>
using namespace std;

vector<bool> isUsed1;
vector<bool> isUsed2;
vector<bool> isUsed3;
int n;
int cnt = 0;

void func(int cur) {
	if (cur == n) {
		cnt++;
		return;
	}

	for (int i = 0; i < n; ++i) {

		if (!isUsed1[i] && !isUsed2[cur + i] && !isUsed3[cur - i + n - 1]) {
			isUsed1[i] = true;
			isUsed2[cur + i] = true;
			isUsed3[cur - i + n - 1] = true;

			func(cur + 1);

			isUsed1[i] = false;
			isUsed2[cur + i] = false;
			isUsed3[cur - i + n - 1] = false;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	isUsed1.resize(n);
	isUsed2.resize(2 * n - 1);
	isUsed3.resize(2 * n - 1);

	fill(isUsed1.begin(), isUsed1.end(), false);
	fill(isUsed2.begin(), isUsed2.end(), false);
	fill(isUsed3.begin(), isUsed3.end(), false);

	func(0);

	cout << cnt;

	return 0;
}