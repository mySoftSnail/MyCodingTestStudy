#include <bits/stdc++.h>
using namespace std;

class DIV {
	int dividend, n;
	int* num;

public:
	DIV(int a, int digit) {
		dividend = a;
		n = digit;
		num = new int[n];
	}

	void operator/(int divisor) {
		while (dividend / divisor) {
			dividend %= divisor;
		}

		for (int i = 0; i < n; ++i) {
			dividend *= 10;
			num[i] = dividend / divisor;
			dividend %= divisor;
		}
	}

	void print() {
		cout << num[n - 1];
	}
};

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int a, b, digit;
	cin >> a >> b >> digit;

	DIV d(a, digit);
	d / b;
	d.print();

}
