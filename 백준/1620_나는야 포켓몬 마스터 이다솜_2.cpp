#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> s2i;
string i2s[100005];

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; ++i) {
		string name;
		cin >> i2s[i];
		s2i[i2s[i]] = i;
	}

	while (m--) {
		string query;
		cin >> query;

		if (isdigit(query[0])) // 매개변수인 char가 10진수 숫자로 변경이 가능하면 true
			cout << i2s[stoi(query)] << '\n'; // 숫자->이름
		else
			cout << s2i[query] << '\n'; // 이름->숫자
	}
}