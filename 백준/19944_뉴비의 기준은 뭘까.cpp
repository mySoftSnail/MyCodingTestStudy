#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n, m;
	cin >> n >> m;

	if (m <= 2) cout << "NEWBIE!";
	else if (m <= n) cout << "OLDBIE!";
	else cout << "TLE!";
}