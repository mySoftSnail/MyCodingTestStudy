#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n;
ll f[93];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i <= n; ++i) 
		f[i] = f[i - 1] + f[i - 2];
	cout << f[n];
}