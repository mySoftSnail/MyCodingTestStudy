#include <iostream>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n;
	cin >> n;
	while (n--) {
		string str;
		cin >> str;
		for (int i = 0; i <= str.size() - 1; ++i) {
			if (i == 0 || str[i] != str[i - 1])
				cout << str[i];
		}
		cout << '\n';
	}
}