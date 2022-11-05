#include <bits/stdc++.h>
using namespace std;

int k, l;
unordered_map<string, int> m;
vector<string> v;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> k >> l;
	for (int i = 0; i < l; ++i) {
		string str;
		cin >> str;
		v.push_back(str);
		m[str] = i;
	}

	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	sort(v.begin(), v.end(), [](string& a, string& b)->bool {return m[a] < m[b]; });

	int en = min(k, (int)v.size());
	for (int i = 0; i < en; ++i)
		cout << v[i] << '\n';
}

/*

3 9
20103324
20133221
20133221
20093778
20140101
01234567
20093778
20103325
20103324

10 8
20103324
20133221
20133221
20093778
20140101
01234567
20093778
20103325

10 9
20103324
20133221
20133221
20093778
20140101
01234567
20093778
20103325
20103324

1 6
20103324
20103324
20093778
20103324
20103324
20103324

2 6
20103324
20103324
20093778
20103324
01234567
20103324

*/