#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;

	while (n--) {
		stack<char> S;
		string str;
		cin >> str;

		for (char c : str) {
			if (!S.empty() && c == ')') {
				if (S.top() == '(') {
					S.pop();
				}
			}
			else {
				S.push(c);
			}
		}

		S.empty() ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}