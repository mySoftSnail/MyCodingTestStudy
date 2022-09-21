#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mil 1000000
ll f[mil + mil + 3];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	f[-1 + mil] = 1;
	f[0 + mil] = 0;
	f[1 + mil] = 1;

	if (n >= 1) 
		for (int i = 2; i <= n; ++i) 
			f[i + mil] = (f[i + mil - 1] + f[i + mil - 2]) % 1000000000;

	else if (n <= -1) 
		for (int i = -2; i >= n; --i) 
			f[i + mil] = (f[i + mil + 2] - f[i + mil + 1]) % 1000000000;

	if (f[n + mil] > 0) cout << 1 << '\n';
	else if(f[n+mil] == 0) cout << 0 << '\n';
	else cout << -1 << '\n';

	cout << abs(f[n + mil]);
}