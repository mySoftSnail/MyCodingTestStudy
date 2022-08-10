#include <bits/stdc++.h>
using namespace std;

string cr[8] = { "dz=", "c=", "c-", "d-","lj", "nj", "s=", "z=" };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;

	int ans = 0;

	for (int i = 0; i < 8; ++i) {
		string cro = cr[i];
		int idx = str.find(cro);
		while (idx != -1) {
			int len = cro.size();
			str.erase(idx, len);
			str.insert(idx, ".");
			idx = str.find(cro);
		}
	}
	
	ans += str.size();

	cout << ans;

	return 0;
}