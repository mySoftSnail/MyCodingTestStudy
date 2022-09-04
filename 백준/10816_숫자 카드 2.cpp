#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n;
	int* arr = new int[20000001];
	fill(arr, arr + 20000001, 0);

	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		arr[x + 10000000]++;
	}

	cin >> m;
	for (int i = 0; i < m; ++i) {
		int idx;
		cin >> idx;
		cout << arr[idx + 10000000] << ' ';
	}

	delete[] arr;

	return 0;
}
