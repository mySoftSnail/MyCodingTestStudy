#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, v;
	cin >> a >> b >> v;

	if (a == v) {
		cout << 1; 
	}
	else {
		double da = double(a);
		double db = double(b);
		double dv = double(v);

		int day = int(ceil((dv - da) / (da - db))) + 1;
		cout << day;
	}
}