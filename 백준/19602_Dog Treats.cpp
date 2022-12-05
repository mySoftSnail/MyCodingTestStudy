#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	
	int s, m, l;
	cin >> s >> m >> l;
	int x = s + 2 * m + 3 * l;
	if (x >= 10) cout << "happy";
	else cout << "sad";
}

