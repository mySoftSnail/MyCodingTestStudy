#include <bits/stdc++.h>
using namespace std;

bool comp(tuple<int, string, int> a, tuple<int, string, int> b) {
	if (get<0>(a) < get<0>(b)) return true;
	else if (get<0>(a) == get<0>(b)) {
		if (get<2>(a) < get<2>(b)) return true;
	}
	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	vector<tuple<int, string, int>> memvec;

	for (int i = 0; i < n; ++i) {
		int age;
		string name;
		cin >> age >> name;
		memvec.push_back({ age,name,i });
	}

	sort(memvec.begin(), memvec.end(), comp);

	for (const auto& e : memvec) 
		cout << get<0>(e) << ' ' << get<1>(e) << '\n';

	return 0;
}