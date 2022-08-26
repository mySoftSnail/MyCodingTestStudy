#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	map<string, int> books;

	int n;
	cin >> n;
	int maxcnt = 0;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		books[str]++;
		maxcnt = books[str] > maxcnt ? books[str] : maxcnt;
	}

	vector<string> titles;
	for (auto b : books) 
		if (b.second == maxcnt) 
			titles.push_back(b.first);


	sort(titles.begin(), titles.end());

	cout << titles[0];

	return 0;
}
