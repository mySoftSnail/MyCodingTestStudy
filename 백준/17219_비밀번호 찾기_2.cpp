#include <bits/stdc++.h>
using namespace std;

int n, m;
unordered_map<string, string> um;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> n >> m;
	while (n--) {
		string addr, pass;
		cin >> addr >> pass;
		um[addr] = pass;
	}

	while (m--) {
		string addr;
		cin >> addr;
		cout << um[addr] << '\n';
	}
}

