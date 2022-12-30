#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> pig(6);
		for (int i = 0; i < 6; ++i)
			cin >> pig[i];

		int day = 1;
		while (n >= accumulate(pig.begin(), pig.end(), 0)) {
			vector<int> tmp(pig);
			day++;
			for (int i = 0; i < 6; ++i) {
				int pre = i - 1 + 6;
				int nxt = i + 1 + 6;
				int acr = i + 3 + 6;
				pig[i] += tmp[pre % 6];
				pig[i] += tmp[nxt % 6];
				pig[i] += tmp[acr % 6];
			}
		}
		cout << day << '\n';
	}
}