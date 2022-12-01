#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int x = 0, y = 0;

	int arr1[4];
	for (int i = 0; i < 4; ++i) {
		cin >> arr1[i];
		x += arr1[i];
	}
	x -= min({ arr1[0], arr1[1], arr1[2], arr1[3] });

	int a, b;
	cin >> a >> b;
	y = max(a, b);

	cout << x + y;

}

