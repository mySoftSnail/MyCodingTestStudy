#include <bits/stdc++.h>
using namespace std;

int N, M;
map<string, string> m;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> N >> M;
	for (int i = 0; i < N; ++i) {
		string addr, pass;
		cin >> addr >> pass;
		m[addr] = pass;
	}

	for (int i = 0; i < M; ++i) {
		string addr;
		cin >> addr;
		cout << m[addr] << '\n';
	}

	return 0;
}