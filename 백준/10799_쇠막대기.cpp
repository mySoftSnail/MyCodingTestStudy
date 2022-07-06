#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	stack<char> S;
	string str;
	cin >> str;

	int len = str.size();
	int res = 0;

	for (int i = 0; i < len; ++i) {
		if (str[i] == '(') {
			S.push(str[i]);
		}
		else {	// c == ')'
			if (str[i - 1] == '(') {	// 레이저
				S.pop();
				res += S.size();
			}

			else {	// 막대의 끝
				S.pop();
				res++;	// 막대 조각 한 개가 추가된 것과 동일
			}
		}
	}
	cout << res;

	return 0;
}
