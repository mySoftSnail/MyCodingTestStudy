#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;

	int ans = 0;
	int cut = 0;
	bool minus = false;

	for (int i = 0; i <= str.size(); ++i) {
		if (str[i] == '-' || str[i] == '+' || i == str.size()) {
			int num = stoi(str.substr(cut, i - cut + 1));

			ans = minus ? ans - num : ans + num;
			cut = i + 1;

			if (str[i] == '-') 
				minus = true;
		}
	}

	cout << ans << '\n';
}


/*

50-100+200-300
output: 50
answer: -550

50-100+200-300+200
output: 50
answer: -750
*/
