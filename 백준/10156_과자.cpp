#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int k, n, m;
	cin >> k >> n >> m;

	cout << max(k * n - m, 0);
}

