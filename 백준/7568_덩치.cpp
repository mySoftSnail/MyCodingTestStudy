#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int n;
pair<int, int> arr[52];

int solve(int k) {
	int cnt = 0;

	int kx = arr[k].X;
	int ky = arr[k].Y;

	for (int i = 0; i < n; ++i) {
		if (i == k) continue;

		if ((arr[i].X > kx) && (arr[i].Y > ky)) cnt++;
	}

	return cnt + 1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> arr[i].X >> arr[i].Y;
	}

	for (int i = 0; i < n; ++i) {
		cout << solve(i) << ' ';
	}

	return 0;
}