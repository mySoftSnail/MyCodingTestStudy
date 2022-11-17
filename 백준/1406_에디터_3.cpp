#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	string str;
	cin >> str;
	list<char> l;

	for (auto c : str)
		l.push_back(c);

	int m;
	cin >> m;
	auto it = l.end();
	while (m--) {
		char op;
		cin >> op;
		switch (op) {
		case 'L':
			if (it != l.begin())
				it--;
			break;
		case 'D':
			if (it != l.end())
				it++;
			break;
		case 'B':
			if (it != l.begin()) {
				it--;
				it = l.erase(it);
			}
			break;
		case 'P':
			char c;
			cin >> c;
			l.insert(it, c);
			break;
		}
	}

	for (auto it : l)
		cout << it;
}

