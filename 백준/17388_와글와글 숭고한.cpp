#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int s, k, h;
	cin >> s >> k >> h;

	if (s + k + h >= 100)
		cout << "OK";
	else {
		int mn = min({ s,k,h });
		if (s == mn) cout << "Soongsil";
		if (k == mn) cout << "Korea";
		if (h == mn) cout << "Hanyang";
	}

}

