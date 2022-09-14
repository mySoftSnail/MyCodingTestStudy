#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	vector<long long> v;
	for (int i = 0; i < N; ++i) {
		string str;
		cin >> str;
		reverse(str.begin(), str.end());
		v.push_back(stol(str));
	}

	sort(v.begin(), v.end());

	for (auto& e : v)
		cout << e << '\n';

	return 0;
}