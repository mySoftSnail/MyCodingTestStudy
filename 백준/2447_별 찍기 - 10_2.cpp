#include <bits/stdc++.h>
using namespace std;

void print_star(int i, int j, int n) {
	

	if ((i / n) % 3 == 1 && (j / n) % 3 == 1) 
		cout << ' ';
	else {
		if (n / 3 == 0)
			cout << '*';
		else
			print_star(i, j, n / 3);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			print_star(i, j, n);
		}
		cout << '\n';
	}

	return 0;
}