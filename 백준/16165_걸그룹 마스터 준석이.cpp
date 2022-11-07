#include <bits/stdc++.h>
using namespace std;

int n, m;

int main() {
	cin.tie(0)->sync_with_stdio(0);
				
					// 멤버이름, 그룹명
	unordered_map<string, string> member;
				
					// 그룹명, 멤버 목록
	unordered_map<string, vector<string>> group;

	cin >> n >> m;

	while (n--) {
		string groupname;
		cin >> groupname;
		int cnt;
		vector<string> v;
		cin >> cnt;
		while (cnt--) {
			string membername;
			cin >> membername;
			v.push_back(membername);
			member[membername] = groupname;
		}
		sort(v.begin(), v.end());
		group[groupname] = v;
	}

	while (m--) {
		string query;
		bool printteam;
		cin >> query >> printteam;

		if (printteam) {
			cout << member[query] << '\n';
		}
		else {
			for (auto e : group[query])
				cout << e << '\n';
		}
	}
}