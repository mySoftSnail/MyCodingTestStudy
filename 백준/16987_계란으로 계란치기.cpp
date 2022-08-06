#include <bits/stdc++.h>
using namespace std;

struct egg {
	int d, w;
};

int n;
egg eggs[10];
int mx = 0;
int cnt = 0;

void func(int k) {
	if (k == n) {
		mx = max(cnt, mx);
		return;
	}

	if ((eggs[k].d <= 0) || (cnt == n - 1)) {
		func(k + 1);
		return;
	}

	for (int i = 0; i < n; ++i) {
		if ((i == k) || (eggs[i].d <= 0)) continue;
		eggs[i].d -= eggs[k].w;
		eggs[k].d -= eggs[i].w;
		if (eggs[i].d <= 0) cnt++;
		if (eggs[k].d <= 0) cnt++;
		func(k + 1);
		if (eggs[i].d <= 0) cnt--;
		if (eggs[k].d <= 0) cnt--;
		eggs[i].d += eggs[k].w;
		eggs[k].d += eggs[i].w;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> eggs[i].d >> eggs[i].w;
	}

	func(0);

	cout << mx;

	return 0;
}