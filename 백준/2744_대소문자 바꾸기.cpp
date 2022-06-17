#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;

	int len = str.size();
	for (int i = 0; i < len; ++i) {
		if ((int)str[i] < 97) {
			cout << char(str[i] + 32);
		}
		else {
			cout << char(str[i] - 32);
		}
	}

	return 0;
}