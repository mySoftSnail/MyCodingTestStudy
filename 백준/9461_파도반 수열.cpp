#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll p[103];
int n;
int t;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	p[1] = p[2] = p[3] = 1;
	p[4] = p[5] = 2;
	p[6] = 3;
	p[7] = 4;
	p[8] = 5;

	for (int i = 9; i < 103; ++i)
		p[i] = p[i - 1] + p[i - 5];

	cin >> t;
	while (t--) {
		cin >> n;
		cout << p[n] << '\n';
	}
}