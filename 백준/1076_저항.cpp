#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string a, b, c;
	cin >> a >> b >> c;

	ll res = 0;
	
	if (a == "black") {
		res += 0;
	}
	if (a == "brown") {
		res += 10;
	}
	if (a == "red") {
		res += 20;
	}
	if (a == "orange") {
		res += 30;
	}
	if (a == "yellow") {
		res += 40;
	}
	if (a == "green") {
		res += 50;
	}
	if (a == "blue") {
		res += 60;
	}
	if (a == "violet") {
		res += 70;
	}
	if (a == "grey") {
		res += 80;
	}
	if (a == "white") {
		res += 90;
	}

	if (b == "black") {
		res += 0;
	}
	if (b == "brown") {
		res += 1;
	}
	if (b == "red") {
		res += 2;
	}
	if (b == "orange") {
		res += 3;
	}
	if (b == "yellow") {
		res += 4;
	}
	if (b == "green") {
		res += 5;
	}
	if (b == "blue") {
		res += 6;
	}
	if (b == "violet") {
		res += 7;
	}
	if (b == "grey") {
		res += 8;
	}
	if (b == "white") {
		res += 9;
	}

	if (c == "black") {
		res *= 1;
	}
	if (c == "brown") {
		res *= 10;
	}
	if (c == "red") {
		res *= 100;
	}
	if (c == "orange") {
		res *= 1000;
	}
	if (c == "yellow") {
		res *= 10000;
	}
	if (c == "green") {
		res *= 100000;
	}
	if (c == "blue") {
		res *= 1000000;
	}
	if (c == "violet") {
		res *= 10000000;
	}
	if (c == "grey") {
		res *= 100000000;
	}
	if (c == "white") {
		res *= 1000000000;
	}

	cout << res;

	return 0;
}