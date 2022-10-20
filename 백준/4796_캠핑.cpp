#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int L, P, V;
	int cs = 1;
	while (true) {
		cin >> L >> P >> V;
		if (!L && !P && !V) break;
	
		int day = L * (V / P) + min(L, V % P);
	
		cout << "Case " << cs++ << ": " << day << '\n';
	}
}