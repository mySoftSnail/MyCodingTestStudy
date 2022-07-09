#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;

	B += C;

	while (B > 59) {
		B -= 60;
		A++;
	}

	while (A > 23) {
		A -= 24;
	}

	cout << A << ' ' << B;

	return 0;
}