#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;

	double dividend = 0;
	int divisor = 0;
	while (x--) {
		string name, grade;
		int n;
		cin >> name >> n >> grade;
		divisor += n;

		if (grade == "A+")
			dividend += (4.3 * n);
		if (grade == "A0")
			dividend += (4.0 * n);
		if (grade == "A-")
			dividend += (3.7 * n);
		if (grade == "B+")
			dividend += (3.3 * n);
		if (grade == "B0")
			dividend += (3.0 * n);
		if (grade == "B-")
			dividend += (2.7 * n);
		if (grade == "C+")
			dividend += (2.3 * n);
		if (grade == "C0")
			dividend += (2.0 * n);
		if (grade == "C-")
			dividend += (1.7 * n);
		if (grade == "D+")
			dividend += (1.3 * n);
		if (grade == "D0")
			dividend += (1.0 * n);
		if (grade == "D-")
			dividend += (0.7 * n);
		if (grade == "F")
			dividend += 0.0;
	}
	double ans = dividend / divisor;
	cout << fixed << setprecision(2);
	cout << round(ans * 100) / 100.0;
}
