#include <bits/stdc++.h>
using namespace std;

int n, k;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;

	int a, b, c;
	a = b = c = 1;
	for (int i = 1; i <= n; ++i) 
		a *= i;
	
	for (int i = 1; i <= k; ++i) 
		b *= i;
	
	for (int i = 1; i <= (n - k); ++i)
		c *= i;
	cout << a / (b * c);

}

