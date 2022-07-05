#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	stack<char> S;
	string str;

	while (true) {
		getline(cin, str);
		if (str == ".") break;

		bool balanced = true;
		for (char c : str) {
			if ((c == '(') || (c == '[')) S.push(c);

			if (c == ')') {

				if (S.empty()) balanced = false;
				else S.top() == '(' ? balanced = true : balanced = false;

				if (balanced) S.pop();
				else break;
			}

			if (c == ']') {
				if (S.empty()) balanced = false;
				else S.top() == '[' ? balanced = true : balanced = false;

				if (balanced) S.pop();
				else break;
			}
		}

		if (balanced && S.size() > 0) balanced = false;

		if (balanced) cout << "yes\n";
		else cout << "no\n";

		while (S.size() > 0)
			S.pop();
	}

	return 0;
}