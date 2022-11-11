#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	string str;
	while (1) {
		getline(cin, str);
		if (str == "#") break;

		int cnt = 0;
		for (auto e : str)
			if ((e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u') ||
				(e == 'A' || e == 'E' || e == 'I' || e == 'O' || e == 'U'))
				cnt++;
		cout << cnt << '\n';
	}

}