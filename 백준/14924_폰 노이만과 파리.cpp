#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int s, t, d;
	cin >> s >> t >> d;

	int time = d / (2 * s);
	cout << time * t;
}