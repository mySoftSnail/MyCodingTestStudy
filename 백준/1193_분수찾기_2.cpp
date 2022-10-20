#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;

	int i = 1;
	while (x > i) {
		x -= i;
		i++;
	}

	int nume = x;
	int deno = i + 1 - x;
	if (i % 2) swap(nume, deno);
	cout << nume << '/' << deno;
}