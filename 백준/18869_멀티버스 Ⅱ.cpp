#include <bits/stdc++.h>
using namespace std;

int m, n;
int univ[103][10003];

void compress(int a[]) {
	vector<int> v(a, a + n);
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	for (int i = 0; i < n; ++i) 
		a[i] = lower_bound(v.begin(), v.end(), a[i]) - v.begin();
}

bool compare(int a[], int b[]) {
	for (int i = 0; i < n; ++i)
		if (a[i] != b[i]) return false;
	return true;
}

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> m >> n;
	for (int i = 0; i < m; ++i) {
		for (int k = 0; k < n; ++k) {
			cin >> univ[i][k];
		}
		compress(univ[i]);
	}

	int ans = 0;
	for (int i = 0; i < m - 1; ++i) 
		for (int j = i + 1; j < m; ++j) 
			ans += compare(univ[i], univ[j]);
		
	cout << ans;
}