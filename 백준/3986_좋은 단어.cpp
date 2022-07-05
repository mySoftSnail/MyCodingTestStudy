#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;

	int cnt = 0;
	while (n--) {
		string str;
		stack<char> S;

		cin >> str;

		for (auto c : str) {
			
			if (S.empty())
				S.push(c);

			else
				if (S.top() == c)
					S.pop();
				else
					S.push(c);
		}

		if (S.empty()) cnt++;
	}

	cout << cnt;

	return 0;
}