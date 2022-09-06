#include <bits/stdc++.h>
using namespace std;

int arr[100003];
int n;

void bsearch(int x, int start, int end) {
	int half = (end - start) / 2;
	if (x == arr[start + half]) {
		cout << "1\n";
		return;
	}
	if (start >= end) {
		cout << "0\n";
		return;
	}

	if (x < arr[start + half]) {
		bsearch(x, start, start + half - 1);
	}
	else {
		bsearch(x, start + half + 1, end);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	sort(arr, arr + n);

	int m;
	cin >> m;
	while (m--) {
		int x;
		cin >> x;
		bsearch(x, 0, n - 1);
	}

	return 0;
}