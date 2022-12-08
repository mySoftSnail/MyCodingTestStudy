#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n, w, h, l;
	cin >> n >> w >> h >> l;

	int x = (w / l) * (h / l);

	cout << min(n, x);
}

