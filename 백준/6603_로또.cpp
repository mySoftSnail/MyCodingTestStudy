#include <bits/stdc++.h>
using namespace std;

int n;
int arr[52];
int num[52];
bool isUsed[52];

void func(int k) {
	if (k == 6) {
		for (int i = 0; i < k; ++i) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	int pre = 0;
	if (k != 0) pre = arr[k - 1];

	for (int i = 0; i < n; ++i) {
		if (!isUsed[i] && pre < num[i]) {
			arr[k] = num[i];
			isUsed[i] = true;
			func(k + 1);
			isUsed[i] = false;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	while (true) {
		cin >> t;
		if (t == 0) break;

		n = t;
		for (int i = 0; i < n; ++i) {
			cin >> num[i];
		}

		func(0);

		cout << '\n';
	}

	return 0;
}