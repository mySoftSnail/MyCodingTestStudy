#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
bool isUsed[10];

void func(int k) {
	if (k == m) {
		for (int i = 0; i < k; ++i) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	int pre = 1;
	if (k != 0) pre = arr[k - 1];

	for (int i = 1; i <= n; ++i) {
		if (!isUsed[i] && i >= pre) {
			arr[k] = i;
			if (k == m)
				isUsed[i] = true;
			func(k + 1);
			isUsed[i] = false;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	func(0);

	return 0;
}