#include <iostream>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n;
	cin >> n;
	cout << "Gnomes:\n";
	while (n--) {
		int x, y, z;
		cin >> x >> y >> z;

		if ((x > y && y > z) || (x < y && y < z))
			cout << "Ordered\n";
		else
			cout << "Unordered\n";
	}
}