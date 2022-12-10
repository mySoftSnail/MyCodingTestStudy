#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	while (1) {
		string str;
		getline(cin, str);
		if (str == "0") break;

		int ans = str.size() + 1; // ¿©¹é
		for (auto c : str) {
			if (c == '1')
				ans += 2;
			else if (c == '0')
				ans += 4;
			else
				ans += 3;
		}
		cout << ans << '\n';
	}
}