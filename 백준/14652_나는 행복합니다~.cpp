#include <bits/stdc++.h>
using namespace std;

int n, m, k;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m >> k;
	
	int x = k / m;
	int y = k - x * m;

	cout << x << ' ' << y;
}