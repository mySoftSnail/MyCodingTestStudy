#include <bits/stdc++.h>
using namespace std;

int n;
int a[1010], d[1010];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	fill(d, d + n, 1);

	for (int i = 0; i < n; ++i) 
		for (int j = 0; j < i; ++j) 
			if (a[i] > a[j])
				d[i] = max(d[i], d[j] + 1);

	cout << *max_element(d, d + n);
}