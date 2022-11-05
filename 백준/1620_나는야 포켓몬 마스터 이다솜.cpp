#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> namemap;
unordered_map<int, string> nummap;
int n, m;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		string name;
		cin >> name;
		namemap[name] = i;
		nummap[i] = name;
	}

	while (m--) {
		string inv;
		cin >> inv;

		if (*inv.begin() >= 'A' || *(inv.end() - 1) >= 'A') { // 입력으로 포켓몬 이름
			string name = inv;
			cout << namemap[name] << '\n';
		}
		else { // 입력으로 포켓몬 번호
			int num = stoi(inv);
			cout << nummap[num] << '\n';
		}
	}
} 