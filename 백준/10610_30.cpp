#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string n;
	cin >> n;
	sort(n.begin(), n.end());

	vector<int> v;
	do {
		if (n[0] != '0') 
			v.push_back(stoi(n));

	} while (next_permutation(n.begin(), n.end()));

	sort(v.begin(), v.end(), greater<int>());
	for (auto e : v) {
		if (e % 30 == 0) {
			cout << e;
			return 0;
		}
	}
	cout << -1;
}

